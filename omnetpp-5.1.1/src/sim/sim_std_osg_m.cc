//
// Generated file, do not edit! Created by nedtool 5.1 from sim_std_osg.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wshadow"
#  pragma clang diagnostic ignored "-Wconversion"
#  pragma clang diagnostic ignored "-Wunused-parameter"
#  pragma clang diagnostic ignored "-Wc++98-compat"
#  pragma clang diagnostic ignored "-Wunreachable-code-break"
#  pragma clang diagnostic ignored "-Wold-style-cast"
#elif defined(__GNUC__)
#  pragma GCC diagnostic ignored "-Wshadow"
#  pragma GCC diagnostic ignored "-Wconversion"
#  pragma GCC diagnostic ignored "-Wunused-parameter"
#  pragma GCC diagnostic ignored "-Wold-style-cast"
#  pragma GCC diagnostic ignored "-Wsuggest-attribute=noreturn"
#  pragma GCC diagnostic ignored "-Wfloat-conversion"
#endif

#include <iostream>
#include <sstream>
#include "sim_std_osg_m.h"

namespace omnetpp {

// Template pack/unpack rules. They are declared *after* a1l type-specific pack functions for multiple reasons.
// They are in the omnetpp namespace, to allow them to be found by argument-dependent lookup via the cCommBuffer argument

// Packing/unpacking an std::vector
template<typename T, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::vector<T,A>& v)
{
    int n = v.size();
    doParsimPacking(buffer, n);
    for (int i = 0; i < n; i++)
        doParsimPacking(buffer, v[i]);
}

template<typename T, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::vector<T,A>& v)
{
    int n;
    doParsimUnpacking(buffer, n);
    v.resize(n);
    for (int i = 0; i < n; i++)
        doParsimUnpacking(buffer, v[i]);
}

// Packing/unpacking an std::list
template<typename T, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::list<T,A>& l)
{
    doParsimPacking(buffer, (int)l.size());
    for (typename std::list<T,A>::const_iterator it = l.begin(); it != l.end(); ++it)
        doParsimPacking(buffer, (T&)*it);
}

template<typename T, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::list<T,A>& l)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i=0; i<n; i++) {
        l.push_back(T());
        doParsimUnpacking(buffer, l.back());
    }
}

// Packing/unpacking an std::set
template<typename T, typename Tr, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::set<T,Tr,A>& s)
{
    doParsimPacking(buffer, (int)s.size());
    for (typename std::set<T,Tr,A>::const_iterator it = s.begin(); it != s.end(); ++it)
        doParsimPacking(buffer, *it);
}

template<typename T, typename Tr, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::set<T,Tr,A>& s)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i=0; i<n; i++) {
        T x;
        doParsimUnpacking(buffer, x);
        s.insert(x);
    }
}

// Packing/unpacking an std::map
template<typename K, typename V, typename Tr, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::map<K,V,Tr,A>& m)
{
    doParsimPacking(buffer, (int)m.size());
    for (typename std::map<K,V,Tr,A>::const_iterator it = m.begin(); it != m.end(); ++it) {
        doParsimPacking(buffer, it->first);
        doParsimPacking(buffer, it->second);
    }
}

template<typename K, typename V, typename Tr, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::map<K,V,Tr,A>& m)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i=0; i<n; i++) {
        K k; V v;
        doParsimUnpacking(buffer, k);
        doParsimUnpacking(buffer, v);
        m[k] = v;
    }
}

// Default pack/unpack function for arrays
template<typename T>
void doParsimArrayPacking(omnetpp::cCommBuffer *b, const T *t, int n)
{
    for (int i = 0; i < n; i++)
        doParsimPacking(b, t[i]);
}

template<typename T>
void doParsimArrayUnpacking(omnetpp::cCommBuffer *b, T *t, int n)
{
    for (int i = 0; i < n; i++)
        doParsimUnpacking(b, t[i]);
}

// Default rule to prevent compiler from choosing base class' doParsimPacking() function
template<typename T>
void doParsimPacking(omnetpp::cCommBuffer *, const T& t)
{
    throw omnetpp::cRuntimeError("Parsim error: No doParsimPacking() function for type %s", omnetpp::opp_typename(typeid(t)));
}

template<typename T>
void doParsimUnpacking(omnetpp::cCommBuffer *, T& t)
{
    throw omnetpp::cRuntimeError("Parsim error: No doParsimUnpacking() function for type %s", omnetpp::opp_typename(typeid(t)));
}

}  // namespace omnetpp

namespace omnetpp {

// forward
template<typename T, typename A>
std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec);

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// operator<< for std::vector<T>
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');
    
    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

class cOsgCanvasDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
  public:
    cOsgCanvasDescriptor();
    virtual ~cOsgCanvasDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyname) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyname) const override;
    virtual int getFieldArraySize(void *object, int field) const override;

    virtual const char *getFieldDynamicTypeString(void *object, int field, int i) const override;
    virtual std::string getFieldValueAsString(void *object, int field, int i) const override;
    virtual bool setFieldValueAsString(void *object, int field, int i, const char *value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual void *getFieldStructValuePointer(void *object, int field, int i) const override;
};

Register_ClassDescriptor(cOsgCanvasDescriptor)

cOsgCanvasDescriptor::cOsgCanvasDescriptor() : omnetpp::cClassDescriptor("omnetpp::cOsgCanvas", "omnetpp::cOwnedObject")
{
    propertynames = nullptr;
}

cOsgCanvasDescriptor::~cOsgCanvasDescriptor()
{
    delete[] propertynames;
}

bool cOsgCanvasDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<cOsgCanvas *>(obj)!=nullptr;
}

const char **cOsgCanvasDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = {  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *cOsgCanvasDescriptor::getProperty(const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int cOsgCanvasDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount() : 7;
}

unsigned int cOsgCanvasDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND | FD_ISPOINTER,
        FD_ISEDITABLE,
        FD_ISCOMPOUND | FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<7) ? fieldTypeFlags[field] : 0;
}

const char *cOsgCanvasDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldNames[] = {
        "scene",
        "viewerStyle",
        "clearColor",
        "cameraManipulatorType",
        "fieldOfViewAngle",
        "zNear",
        "zFar",
    };
    return (field>=0 && field<7) ? fieldNames[field] : nullptr;
}

int cOsgCanvasDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount() : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "scene")==0) return base+0;
    if (fieldName[0]=='v' && strcmp(fieldName, "viewerStyle")==0) return base+1;
    if (fieldName[0]=='c' && strcmp(fieldName, "clearColor")==0) return base+2;
    if (fieldName[0]=='c' && strcmp(fieldName, "cameraManipulatorType")==0) return base+3;
    if (fieldName[0]=='f' && strcmp(fieldName, "fieldOfViewAngle")==0) return base+4;
    if (fieldName[0]=='z' && strcmp(fieldName, "zNear")==0) return base+5;
    if (fieldName[0]=='z' && strcmp(fieldName, "zFar")==0) return base+6;
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *cOsgCanvasDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "osg::Node",
        "int",
        "Color",
        "int",
        "double",
        "double",
        "double",
    };
    return (field>=0 && field<7) ? fieldTypeStrings[field] : nullptr;
}

const char **cOsgCanvasDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldPropertyNames(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case 1: {
            static const char *names[] = { "editable", "enum", "group",  nullptr };
            return names;
        }
        case 2: {
            static const char *names[] = { "editable", "fromstring", "group", "tostring",  nullptr };
            return names;
        }
        case 3: {
            static const char *names[] = { "editable", "enum", "group",  nullptr };
            return names;
        }
        case 4: {
            static const char *names[] = { "editable", "group",  nullptr };
            return names;
        }
        case 5: {
            static const char *names[] = { "editable", "group",  nullptr };
            return names;
        }
        case 6: {
            static const char *names[] = { "editable", "group",  nullptr };
            return names;
        }
        default: return nullptr;
    }
}

const char *cOsgCanvasDescriptor::getFieldProperty(int field, const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldProperty(field, propertyname);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case 1:
            if (!strcmp(propertyname,"editable")) return "";
            if (!strcmp(propertyname,"enum")) return "omnetpp::cOsgCanvas::ViewerStyle";
            if (!strcmp(propertyname,"group")) return "viewer hints";
            return nullptr;
        case 2:
            if (!strcmp(propertyname,"editable")) return "";
            if (!strcmp(propertyname,"fromstring")) return "cFigure::parseColor($)";
            if (!strcmp(propertyname,"group")) return "viewer hints";
            if (!strcmp(propertyname,"tostring")) return ".str()";
            return nullptr;
        case 3:
            if (!strcmp(propertyname,"editable")) return "";
            if (!strcmp(propertyname,"enum")) return "omnetpp::cOsgCanvas::CameraManipulatorType";
            if (!strcmp(propertyname,"group")) return "viewer hints";
            return nullptr;
        case 4:
            if (!strcmp(propertyname,"editable")) return "";
            if (!strcmp(propertyname,"group")) return "viewer hints";
            return nullptr;
        case 5:
            if (!strcmp(propertyname,"editable")) return "";
            if (!strcmp(propertyname,"group")) return "viewer hints";
            return nullptr;
        case 6:
            if (!strcmp(propertyname,"editable")) return "";
            if (!strcmp(propertyname,"group")) return "viewer hints";
            return nullptr;
        default: return nullptr;
    }
}

int cOsgCanvasDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas *pp = (cOsgCanvas *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

const char *cOsgCanvasDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas *pp = (cOsgCanvas *)object; (void)pp;
    switch (field) {
        case 0: {osg::Node *value = pp->getScene(); return omnetpp::opp_typename(typeid(*value));}
        default: return nullptr;
    }
}

std::string cOsgCanvasDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas *pp = (cOsgCanvas *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getScene(); return out.str();}
        case 1: return enum2string(pp->getViewerStyle(), "omnetpp::cOsgCanvas::ViewerStyle");
        case 2: return pp->getClearColor().str();
        case 3: return enum2string(pp->getCameraManipulatorType(), "omnetpp::cOsgCanvas::CameraManipulatorType");
        case 4: return double2string(pp->getFieldOfViewAngle());
        case 5: return double2string(pp->getZNear());
        case 6: return double2string(pp->getZFar());
        default: return "";
    }
}

bool cOsgCanvasDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas *pp = (cOsgCanvas *)object; (void)pp;
    switch (field) {
        case 1: pp->setViewerStyle((omnetpp::cOsgCanvas::ViewerStyle)string2enum(value, "omnetpp::cOsgCanvas::ViewerStyle")); return true;
        case 2: pp->setClearColor(cFigure::parseColor(value)); return true;
        case 3: pp->setCameraManipulatorType((omnetpp::cOsgCanvas::CameraManipulatorType)string2enum(value, "omnetpp::cOsgCanvas::CameraManipulatorType")); return true;
        case 4: pp->setFieldOfViewAngle(string2double(value)); return true;
        case 5: pp->setZNear(string2double(value)); return true;
        case 6: pp->setZFar(string2double(value)); return true;
        default: return false;
    }
}

const char *cOsgCanvasDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructName(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case 0: return omnetpp::opp_typename(typeid(osg::Node));
        case 2: return omnetpp::opp_typename(typeid(Color));
        default: return nullptr;
    };
}

void *cOsgCanvasDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    cOsgCanvas *pp = (cOsgCanvas *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(pp->getScene()); break;
        case 2: return (void *)(&pp->getClearColor()); break;
        default: return nullptr;
    }
}

} // namespace omnetpp

namespace osg {

// forward
template<typename T, typename A>
std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec);

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// operator<< for std::vector<T>
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');
    
    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

class NodeDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
  public:
    NodeDescriptor();
    virtual ~NodeDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyname) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyname) const override;
    virtual int getFieldArraySize(void *object, int field) const override;

    virtual const char *getFieldDynamicTypeString(void *object, int field, int i) const override;
    virtual std::string getFieldValueAsString(void *object, int field, int i) const override;
    virtual bool setFieldValueAsString(void *object, int field, int i, const char *value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual void *getFieldStructValuePointer(void *object, int field, int i) const override;
};

Register_ClassDescriptor(NodeDescriptor)

NodeDescriptor::NodeDescriptor() : omnetpp::cClassDescriptor("osg::Node", "")
{
    propertynames = nullptr;
}

NodeDescriptor::~NodeDescriptor()
{
    delete[] propertynames;
}

bool NodeDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<Node *>(obj)!=nullptr;
}

const char **NodeDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = {  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *NodeDescriptor::getProperty(const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int NodeDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount() : 2;
}

unsigned int NodeDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY,
        FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *NodeDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldNames[] = {
        "descriptions",
        "children",
    };
    return (field>=0 && field<2) ? fieldNames[field] : nullptr;
}

int NodeDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount() : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "descriptions")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "children")==0) return base+1;
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *NodeDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "string",
        "Node",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : nullptr;
}

const char **NodeDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldPropertyNames(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case 0: {
            static const char *names[] = { "getter", "sizeGetter",  nullptr };
            return names;
        }
        case 1: {
            static const char *names[] = { "getter", "sizeGetter",  nullptr };
            return names;
        }
        default: return nullptr;
    }
}

const char *NodeDescriptor::getFieldProperty(int field, const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldProperty(field, propertyname);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "osgNode_getDescription($,i)";
            if (!strcmp(propertyname,"sizeGetter")) return "osgNode_getNumDescriptions($)";
            return nullptr;
        case 1:
            if (!strcmp(propertyname,"getter")) return "osgNode_getChild($,i)";
            if (!strcmp(propertyname,"sizeGetter")) return "osgNode_getNumChildren($)";
            return nullptr;
        default: return nullptr;
    }
}

int NodeDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    Node *pp = (Node *)object; (void)pp;
    switch (field) {
        case 0: return osgNode_getNumDescriptions(pp);
        case 1: return osgNode_getNumChildren(pp);
        default: return 0;
    }
}

const char *NodeDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    Node *pp = (Node *)object; (void)pp;
    switch (field) {
        case 1: {Node *value = osgNode_getChild(pp,i); return omnetpp::opp_typename(typeid(*value));}
        default: return nullptr;
    }
}

std::string NodeDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    Node *pp = (Node *)object; (void)pp;
    switch (field) {
        case 0: return oppstring2string(osgNode_getDescription(pp,i));
        case 1: {std::stringstream out; out << osgNode_getChild(pp,i); return out.str();}
        default: return "";
    }
}

bool NodeDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    Node *pp = (Node *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NodeDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructName(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case 1: return omnetpp::opp_typename(typeid(Node));
        default: return nullptr;
    };
}

void *NodeDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    Node *pp = (Node *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(osgNode_getChild(pp,i)); break;
        default: return nullptr;
    }
}

} // namespace osg


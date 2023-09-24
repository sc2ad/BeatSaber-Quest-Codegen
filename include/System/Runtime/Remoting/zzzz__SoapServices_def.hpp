#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Reflection {
class MethodBase;
}
namespace System {
class Type;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Remoting {
class System__Runtime__Remoting__SoapServices__TypeInfo;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class SoapServices;
}
namespace System::Runtime::Remoting {
class System__Runtime__Remoting__SoapServices__TypeInfo;
}
// Type: ::TypeInfo
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3073))
// CS Name: System.Runtime.Remoting.SoapServices::TypeInfo
class CORDL_TYPE System__Runtime__Remoting__SoapServices__TypeInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Runtime__Remoting__SoapServices__TypeInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__Remoting__SoapServices__TypeInfo", modifiers: " const&", def_value: None }]
constexpr System__Runtime__Remoting__SoapServices__TypeInfo(System__Runtime__Remoting__SoapServices__TypeInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__Remoting__SoapServices__TypeInfo", modifiers: "&&", def_value: None }]
constexpr System__Runtime__Remoting__SoapServices__TypeInfo(System__Runtime__Remoting__SoapServices__TypeInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__Remoting__SoapServices__TypeInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Runtime__Remoting__SoapServices__TypeInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Runtime__Remoting__SoapServices__TypeInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Runtime__Remoting__SoapServices__TypeInfo& operator=(System__Runtime__Remoting__SoapServices__TypeInfo&& o) noexcept = default;
  constexpr System__Runtime__Remoting__SoapServices__TypeInfo& operator=(System__Runtime__Remoting__SoapServices__TypeInfo const& o) noexcept = default;
                


// Fields

 System::Collections::Hashtable __declspec(property(get=__get_Attributes, put=__set_Attributes))  Attributes;

constexpr void __set_Attributes(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_Attributes() const;

 System::Collections::Hashtable __declspec(property(get=__get_Elements, put=__set_Elements))  Elements;

constexpr void __set_Elements(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_Elements() const;


// Methods

static System::Runtime::Remoting::System__Runtime__Remoting__SoapServices__TypeInfo New_ctor() ;

/// @brief Method .ctor addr 0x23292e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
// Type: System.Runtime.Remoting::SoapServices
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3074))
// CS Name: System.Runtime.Remoting.SoapServices
class CORDL_TYPE SoapServices : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TypeInfo = System::Runtime::Remoting::System__Runtime__Remoting__SoapServices__TypeInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SoapServices() = default;

// Ctor Parameters [CppParam { name: "", ty: "SoapServices", modifiers: " const&", def_value: None }]
constexpr SoapServices(SoapServices const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SoapServices", modifiers: "&&", def_value: None }]
constexpr SoapServices(SoapServices&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SoapServices(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SoapServices& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SoapServices& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SoapServices& operator=(SoapServices&& o) noexcept = default;
  constexpr SoapServices& operator=(SoapServices const& o) noexcept = default;
                


// Fields

static System::Collections::Hashtable __declspec(property(get=__get__xmlTypes, put=__set__xmlTypes))  _xmlTypes;

static void __set__xmlTypes(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get__xmlTypes() ;

static System::Collections::Hashtable __declspec(property(get=__get__xmlElements, put=__set__xmlElements))  _xmlElements;

static void __set__xmlElements(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get__xmlElements() ;

static System::Collections::Hashtable __declspec(property(get=__get__soapActions, put=__set__soapActions))  _soapActions;

static void __set__soapActions(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get__soapActions() ;

static System::Collections::Hashtable __declspec(property(get=__get__soapActionsMethods, put=__set__soapActionsMethods))  _soapActionsMethods;

static void __set__soapActionsMethods(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get__soapActionsMethods() ;

static System::Collections::Hashtable __declspec(property(get=__get__typeInfos, put=__set__typeInfos))  _typeInfos;

static void __set__typeInfos(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get__typeInfos() ;


// Properties

static ::StringW __declspec(property(get=get_XmlNsForClrTypeWithAssembly))  XmlNsForClrTypeWithAssembly;

static ::StringW __declspec(property(get=get_XmlNsForClrTypeWithNs))  XmlNsForClrTypeWithNs;

static ::StringW __declspec(property(get=get_XmlNsForClrTypeWithNsAndAssembly))  XmlNsForClrTypeWithNsAndAssembly;


// Methods

/// @brief Method get_XmlNsForClrTypeWithAssembly addr 0x23282a8 size 0x40 virtual false final false
static ::StringW get_XmlNsForClrTypeWithAssembly() ;

/// @brief Method get_XmlNsForClrTypeWithNs addr 0x23282e8 size 0x40 virtual false final false
static ::StringW get_XmlNsForClrTypeWithNs() ;

/// @brief Method get_XmlNsForClrTypeWithNsAndAssembly addr 0x2328328 size 0x40 virtual false final false
static ::StringW get_XmlNsForClrTypeWithNsAndAssembly() ;

/// @brief Method CodeXmlNamespaceForClrTypeNamespace addr 0x2328368 size 0x198 virtual false final false
static ::StringW CodeXmlNamespaceForClrTypeNamespace(::StringW typeNamespace, ::StringW assemblyName) ;

/// @brief Method GetNameKey addr 0x23285e4 size 0x68 virtual false final false
static ::StringW GetNameKey(::StringW name, ::StringW namspace) ;

/// @brief Method GetAssemblyName addr 0x232864c size 0x134 virtual false final false
static ::StringW GetAssemblyName(System::Reflection::MethodBase mb) ;

/// @brief Method GetXmlElementForInteropType addr 0x2328780 size 0xd0 virtual false final false
static bool GetXmlElementForInteropType(System::Type type, ByRef<::StringW> xmlElement, ByRef<::StringW> xmlNamespace) ;

/// @brief Method GetXmlNamespaceForMethodCall addr 0x2328850 size 0x94 virtual false final false
static ::StringW GetXmlNamespaceForMethodCall(System::Reflection::MethodBase mb) ;

/// @brief Method GetXmlNamespaceForMethodResponse addr 0x23288e4 size 0x94 virtual false final false
static ::StringW GetXmlNamespaceForMethodResponse(System::Reflection::MethodBase mb) ;

/// @brief Method GetXmlTypeForInteropType addr 0x2328978 size 0xc8 virtual false final false
static bool GetXmlTypeForInteropType(System::Type type, ByRef<::StringW> xmlType, ByRef<::StringW> xmlTypeNamespace) ;

/// @brief Method PreLoad addr 0x2328a40 size 0xbc virtual false final false
static void PreLoad(System::Reflection::Assembly assembly) ;

/// @brief Method PreLoad addr 0x2328afc size 0x4c4 virtual false final false
static void PreLoad(System::Type type) ;

/// @brief Method RegisterInteropXmlElement addr 0x2329150 size 0x190 virtual false final false
static void RegisterInteropXmlElement(::StringW xmlElement, ::StringW xmlNamespace, System::Type type) ;

/// @brief Method RegisterInteropXmlType addr 0x2328fc0 size 0x190 virtual false final false
static void RegisterInteropXmlType(::StringW xmlType, ::StringW xmlTypeNamespace, System::Type type) ;

/// @brief Method EncodeNs addr 0x2328500 size 0xe4 virtual false final false
static ::StringW EncodeNs(::StringW ns) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(System::Runtime::Remoting::SoapServices);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::SoapServices, "System.Runtime.Remoting", "SoapServices");
NEED_NO_BOX(System::Runtime::Remoting::System__Runtime__Remoting__SoapServices__TypeInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::System__Runtime__Remoting__SoapServices__TypeInfo, "System.Runtime.Remoting", "SoapServices/TypeInfo");

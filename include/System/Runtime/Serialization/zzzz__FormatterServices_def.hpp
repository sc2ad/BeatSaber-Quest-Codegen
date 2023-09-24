#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class RuntimeType;
}
namespace System::Runtime::Serialization {
class System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class MemberHolder;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Reflection {
class Binder;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class FormatterServices;
}
namespace System::Runtime::Serialization {
class System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0;
}
// Type: ::<>c__DisplayClass9_0
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3208))
// CS Name: System.Runtime.Serialization.FormatterServices::<>c__DisplayClass9_0
class CORDL_TYPE System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0", modifiers: " const&", def_value: None }]
constexpr System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0(System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
constexpr System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0(System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0& operator=(System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0&& o) noexcept = default;
  constexpr System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0& operator=(System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0 const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Type value) ;

constexpr System::Type __get_type() const;


// Methods

static System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0 New_ctor() ;

/// @brief Method .ctor addr 0x234ac34 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetSerializableMembers>b__0 addr 0x234c050 size 0xac virtual false final false
 ::ArrayW<System::Reflection::MemberInfo> _GetSerializableMembers_b__0(System::Runtime::Serialization::MemberHolder _) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
// Type: System.Runtime.Serialization::FormatterServices
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3209))
// CS Name: System.Runtime.Serialization.FormatterServices
class CORDL_TYPE FormatterServices : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass9_0 = System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FormatterServices() = default;

// Ctor Parameters [CppParam { name: "", ty: "FormatterServices", modifiers: " const&", def_value: None }]
constexpr FormatterServices(FormatterServices const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FormatterServices", modifiers: "&&", def_value: None }]
constexpr FormatterServices(FormatterServices&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FormatterServices(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FormatterServices& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FormatterServices& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FormatterServices& operator=(FormatterServices&& o) noexcept = default;
  constexpr FormatterServices& operator=(FormatterServices const& o) noexcept = default;
                


// Fields

static System::Collections::Concurrent::ConcurrentDictionary_2<System::Runtime::Serialization::MemberHolder,::ArrayW<System::Reflection::MemberInfo>> __declspec(property(get=__get_m_MemberInfoTable, put=__set_m_MemberInfoTable))  m_MemberInfoTable;

static void __set_m_MemberInfoTable(System::Collections::Concurrent::ConcurrentDictionary_2<System::Runtime::Serialization::MemberHolder,::ArrayW<System::Reflection::MemberInfo>> value) ;

static System::Collections::Concurrent::ConcurrentDictionary_2<System::Runtime::Serialization::MemberHolder,::ArrayW<System::Reflection::MemberInfo>> __get_m_MemberInfoTable() ;

static bool __declspec(property(get=__get_unsafeTypeForwardersIsEnabled, put=__set_unsafeTypeForwardersIsEnabled))  unsafeTypeForwardersIsEnabled;

static void __set_unsafeTypeForwardersIsEnabled(bool value) ;

static bool __get_unsafeTypeForwardersIsEnabled() ;

static bool __declspec(property(get=__get_unsafeTypeForwardersIsEnabledInitialized, put=__set_unsafeTypeForwardersIsEnabledInitialized))  unsafeTypeForwardersIsEnabledInitialized;

static void __set_unsafeTypeForwardersIsEnabledInitialized(bool value) ;

static bool __get_unsafeTypeForwardersIsEnabledInitialized() ;

static ::ArrayW<System::Type> __declspec(property(get=__get_advancedTypes, put=__set_advancedTypes))  advancedTypes;

static void __set_advancedTypes(::ArrayW<System::Type> value) ;

static ::ArrayW<System::Type> __get_advancedTypes() ;

static System::Reflection::Binder __declspec(property(get=__get_s_binder, put=__set_s_binder))  s_binder;

static void __set_s_binder(System::Reflection::Binder value) ;

static System::Reflection::Binder __get_s_binder() ;


// Methods

/// @brief Method GetSerializableMembers addr 0x2349c4c size 0x198 virtual false final false
static ::ArrayW<System::Reflection::MemberInfo> GetSerializableMembers(System::RuntimeType type) ;

/// @brief Method CheckSerializable addr 0x2349de4 size 0x20 virtual false final false
static bool CheckSerializable(System::RuntimeType type) ;

/// @brief Method InternalGetSerializableMembers addr 0x2349e04 size 0x700 virtual false final false
static ::ArrayW<System::Reflection::MemberInfo> InternalGetSerializableMembers(System::RuntimeType type) ;

/// @brief Method GetParentTypes addr 0x234a504 size 0x408 virtual false final false
static bool GetParentTypes(System::RuntimeType parentType, ByRef<::ArrayW<System::RuntimeType>> parentTypes, ByRef<int32_t> parentTypeCount) ;

/// @brief Method GetSerializableMembers addr 0x234a99c size 0x298 virtual false final false
static ::ArrayW<System::Reflection::MemberInfo> GetSerializableMembers(System::Type type, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetUninitializedObject addr 0x234ac3c size 0x1cc virtual false final false
static ::bs_hook::Il2CppWrapperType GetUninitializedObject(System::Type type) ;

/// @brief Method nativeGetUninitializedObject addr 0x234ae08 size 0x8 virtual false final false
static ::bs_hook::Il2CppWrapperType nativeGetUninitializedObject(System::RuntimeType type) ;

/// @brief Method GetEnableUnsafeTypeForwarders addr 0x234ae10 size 0x8 virtual false final false
static bool GetEnableUnsafeTypeForwarders() ;

/// @brief Method UnsafeTypeForwardersIsEnabled addr 0x234ae18 size 0xa8 virtual false final false
static bool UnsafeTypeForwardersIsEnabled() ;

/// @brief Method SerializationSetValue addr 0x234aec0 size 0x1e4 virtual false final false
static void SerializationSetValue(System::Reflection::MemberInfo fi, ::bs_hook::Il2CppWrapperType target, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method PopulateObjectMembers addr 0x234b154 size 0x314 virtual false final false
static ::bs_hook::Il2CppWrapperType PopulateObjectMembers(::bs_hook::Il2CppWrapperType obj, ::ArrayW<System::Reflection::MemberInfo> members, ::ArrayW<::bs_hook::Il2CppWrapperType> data) ;

/// @brief Method GetObjectData addr 0x234b468 size 0x36c virtual false final false
static ::ArrayW<::bs_hook::Il2CppWrapperType> GetObjectData(::bs_hook::Il2CppWrapperType obj, ::ArrayW<System::Reflection::MemberInfo> members) ;

/// @brief Method GetTypeFromAssembly addr 0x234b854 size 0x9c virtual false final false
static System::Type GetTypeFromAssembly(System::Reflection::Assembly assem, ::StringW name) ;

/// @brief Method LoadAssemblyFromString addr 0x234b8f0 size 0x8 virtual false final false
static System::Reflection::Assembly LoadAssemblyFromString(::StringW assemblyName) ;

/// @brief Method LoadAssemblyFromStringNoThrow addr 0x234b8f8 size 0xd4 virtual false final false
static System::Reflection::Assembly LoadAssemblyFromStringNoThrow(::StringW assemblyName) ;

/// @brief Method GetClrAssemblyName addr 0x234b9cc size 0x16c virtual false final false
static ::StringW GetClrAssemblyName(System::Type type, ByRef<bool> hasTypeForwardedFrom) ;

/// @brief Method GetClrTypeFullName addr 0x234bb38 size 0x80 virtual false final false
static ::StringW GetClrTypeFullName(System::Type type) ;

/// @brief Method GetClrTypeFullNameForArray addr 0x234bbb8 size 0x224 virtual false final false
static ::StringW GetClrTypeFullNameForArray(System::Type type) ;

/// @brief Method GetClrTypeFullNameForNonArrayTypes addr 0x234bddc size 0x274 virtual false final false
static ::StringW GetClrTypeFullNameForNonArrayTypes(System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::FormatterServices);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::FormatterServices, "System.Runtime.Serialization", "FormatterServices");
NEED_NO_BOX(System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0, "System.Runtime.Serialization", "FormatterServices/<>c__DisplayClass9_0");

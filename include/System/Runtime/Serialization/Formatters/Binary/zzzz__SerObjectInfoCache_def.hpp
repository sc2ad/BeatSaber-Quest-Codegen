#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoCache;
}
// Type: System.Runtime.Serialization.Formatters.Binary::SerObjectInfoCache
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3280))
// CS Name: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache
class CORDL_TYPE SerObjectInfoCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SerObjectInfoCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerObjectInfoCache", modifiers: " const&", def_value: None }]
constexpr SerObjectInfoCache(SerObjectInfoCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerObjectInfoCache", modifiers: "&&", def_value: None }]
constexpr SerObjectInfoCache(SerObjectInfoCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerObjectInfoCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SerObjectInfoCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerObjectInfoCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerObjectInfoCache& operator=(SerObjectInfoCache&& o) noexcept = default;
  constexpr SerObjectInfoCache& operator=(SerObjectInfoCache const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_fullTypeName, put=__set_fullTypeName))  fullTypeName;

constexpr void __set_fullTypeName(::StringW value) ;

constexpr ::StringW __get_fullTypeName() const;

 ::StringW __declspec(property(get=__get_assemblyString, put=__set_assemblyString))  assemblyString;

constexpr void __set_assemblyString(::StringW value) ;

constexpr ::StringW __get_assemblyString() const;

 bool __declspec(property(get=__get_hasTypeForwardedFrom, put=__set_hasTypeForwardedFrom))  hasTypeForwardedFrom;

constexpr void __set_hasTypeForwardedFrom(bool value) ;

constexpr bool __get_hasTypeForwardedFrom() const;

 ::ArrayW<System::Reflection::MemberInfo> __declspec(property(get=__get_memberInfos, put=__set_memberInfos))  memberInfos;

constexpr void __set_memberInfos(::ArrayW<System::Reflection::MemberInfo> value) ;

constexpr ::ArrayW<System::Reflection::MemberInfo> __get_memberInfos() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_memberNames, put=__set_memberNames))  memberNames;

constexpr void __set_memberNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_memberNames() const;

 ::ArrayW<System::Type> __declspec(property(get=__get_memberTypes, put=__set_memberTypes))  memberTypes;

constexpr void __set_memberTypes(::ArrayW<System::Type> value) ;

constexpr ::ArrayW<System::Type> __get_memberTypes() const;


// Methods

// Ctor Parameters [CppParam { name: "typeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assemblyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "hasTypeForwardedFrom", ty: "bool", modifiers: "", def_value: None }]
explicit SerObjectInfoCache(::StringW typeName, ::StringW assemblyName, bool hasTypeForwardedFrom) ;

/// @brief Method .ctor addr 0x235f0bc size 0x3c virtual false final false
 void _ctor(::StringW typeName, ::StringW assemblyName, bool hasTypeForwardedFrom) ;

// Ctor Parameters [CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }]
explicit SerObjectInfoCache(System::Type type) ;

/// @brief Method .ctor addr 0x235f0f8 size 0x8c virtual false final false
 void _ctor(System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache, "System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoCache");

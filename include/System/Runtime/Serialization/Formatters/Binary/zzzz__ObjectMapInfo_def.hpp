#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectMapInfo;
}
// Type: System.Runtime.Serialization.Formatters.Binary::ObjectMapInfo
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3276))
// CS Name: System.Runtime.Serialization.Formatters.Binary.ObjectMapInfo
class CORDL_TYPE ObjectMapInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ObjectMapInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectMapInfo", modifiers: " const&", def_value: None }]
constexpr ObjectMapInfo(ObjectMapInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectMapInfo", modifiers: "&&", def_value: None }]
constexpr ObjectMapInfo(ObjectMapInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectMapInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjectMapInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectMapInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectMapInfo& operator=(ObjectMapInfo&& o) noexcept = default;
  constexpr ObjectMapInfo& operator=(ObjectMapInfo const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_objectId, put=__set_objectId))  objectId;

constexpr void __set_objectId(int32_t value) ;

constexpr int32_t __get_objectId() const;

 int32_t __declspec(property(get=__get_numMembers, put=__set_numMembers))  numMembers;

constexpr void __set_numMembers(int32_t value) ;

constexpr int32_t __get_numMembers() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_memberNames, put=__set_memberNames))  memberNames;

constexpr void __set_memberNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_memberNames() const;

 ::ArrayW<System::Type> __declspec(property(get=__get_memberTypes, put=__set_memberTypes))  memberTypes;

constexpr void __set_memberTypes(::ArrayW<System::Type> value) ;

constexpr ::ArrayW<System::Type> __get_memberTypes() const;


// Methods

static System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo New_ctor(int32_t objectId, int32_t numMembers, ::ArrayW<::StringW> memberNames, ::ArrayW<System::Type> memberTypes) ;

/// @brief Method .ctor addr 0x235af98 size 0x40 virtual false final false
 void _ctor(int32_t objectId, int32_t numMembers, ::ArrayW<::StringW> memberNames, ::ArrayW<System::Type> memberTypes) ;

/// @brief Method isCompatible addr 0x235ae5c size 0x13c virtual false final false
 bool isCompatible(int32_t numMembers, ::ArrayW<::StringW> memberNames, ::ArrayW<System::Type> memberTypes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo, "System.Runtime.Serialization.Formatters.Binary", "ObjectMapInfo");

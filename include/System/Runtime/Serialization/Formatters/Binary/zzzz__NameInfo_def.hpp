#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalArrayTypeE;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class NameInfo;
}
// Type: System.Runtime.Serialization.Formatters.Binary::NameInfo
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3294))
// CS Name: System.Runtime.Serialization.Formatters.Binary.NameInfo
class CORDL_TYPE NameInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~NameInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "NameInfo", modifiers: " const&", def_value: None }]
constexpr NameInfo(NameInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NameInfo", modifiers: "&&", def_value: None }]
constexpr NameInfo(NameInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NameInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NameInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NameInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NameInfo& operator=(NameInfo&& o) noexcept = default;
  constexpr NameInfo& operator=(NameInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_NIFullName, put=__set_NIFullName))  NIFullName;

constexpr void __set_NIFullName(::StringW value) ;

constexpr ::StringW __get_NIFullName() const;

 int64_t __declspec(property(get=__get_NIobjectId, put=__set_NIobjectId))  NIobjectId;

constexpr void __set_NIobjectId(int64_t value) ;

constexpr int64_t __get_NIobjectId() const;

 int64_t __declspec(property(get=__get_NIassemId, put=__set_NIassemId))  NIassemId;

constexpr void __set_NIassemId(int64_t value) ;

constexpr int64_t __get_NIassemId() const;

 ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE __declspec(property(get=__get_NIprimitiveTypeEnum, put=__set_NIprimitiveTypeEnum))  NIprimitiveTypeEnum;

constexpr void __set_NIprimitiveTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE __get_NIprimitiveTypeEnum() const;

 ::System::Type __declspec(property(get=__get_NItype, put=__set_NItype))  NItype;

constexpr void __set_NItype(::System::Type value) ;

constexpr ::System::Type __get_NItype() const;

 bool __declspec(property(get=__get_NIisSealed, put=__set_NIisSealed))  NIisSealed;

constexpr void __set_NIisSealed(bool value) ;

constexpr bool __get_NIisSealed() const;

 bool __declspec(property(get=__get_NIisArray, put=__set_NIisArray))  NIisArray;

constexpr void __set_NIisArray(bool value) ;

constexpr bool __get_NIisArray() const;

 bool __declspec(property(get=__get_NIisArrayItem, put=__set_NIisArrayItem))  NIisArrayItem;

constexpr void __set_NIisArrayItem(bool value) ;

constexpr bool __get_NIisArrayItem() const;

 bool __declspec(property(get=__get_NItransmitTypeOnObject, put=__set_NItransmitTypeOnObject))  NItransmitTypeOnObject;

constexpr void __set_NItransmitTypeOnObject(bool value) ;

constexpr bool __get_NItransmitTypeOnObject() const;

 bool __declspec(property(get=__get_NItransmitTypeOnMember, put=__set_NItransmitTypeOnMember))  NItransmitTypeOnMember;

constexpr void __set_NItransmitTypeOnMember(bool value) ;

constexpr bool __get_NItransmitTypeOnMember() const;

 bool __declspec(property(get=__get_NIisParentTypeOnObject, put=__set_NIisParentTypeOnObject))  NIisParentTypeOnObject;

constexpr void __set_NIisParentTypeOnObject(bool value) ;

constexpr bool __get_NIisParentTypeOnObject() const;

 ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE __declspec(property(get=__get_NIarrayEnum, put=__set_NIarrayEnum))  NIarrayEnum;

constexpr void __set_NIarrayEnum(::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE __get_NIarrayEnum() const;

 bool __declspec(property(get=__get_NIsealedStatusChecked, put=__set_NIsealedStatusChecked))  NIsealedStatusChecked;

constexpr void __set_NIsealedStatusChecked(bool value) ;

constexpr bool __get_NIsealedStatusChecked() const;


// Properties

 bool __declspec(property(get=get_IsSealed))  IsSealed;

 ::StringW __declspec(property(get=get_NIname, put=set_NIname))  NIname;


// Methods

// Ctor Parameters []
explicit NameInfo() ;

/// @brief Method .ctor addr 0x2365bfc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x2365bcc size 0x20 virtual false final false
 void Init() ;

/// @brief Method get_IsSealed addr 0x2365928 size 0x4c virtual false final false
 bool get_IsSealed() ;

/// @brief Method get_NIname addr 0x2369f3c size 0x38 virtual false final false
 ::StringW get_NIname() ;

/// @brief Method set_NIname addr 0x2369f74 size 0x8 virtual false final false
 void set_NIname(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::NameInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::NameInfo, "System.Runtime.Serialization.Formatters.Binary", "NameInfo");

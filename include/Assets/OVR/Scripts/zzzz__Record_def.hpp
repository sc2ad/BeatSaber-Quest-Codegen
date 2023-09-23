#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Assets::OVR::Scripts {
class Record;
}
// Type: Assets.OVR.Scripts::Record
namespace Assets::OVR::Scripts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9513))
// CS Name: Assets.OVR.Scripts.Record
class CORDL_TYPE Record : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Record() = default;

// Ctor Parameters [CppParam { name: "", ty: "Record", modifiers: " const&", def_value: None }]
constexpr Record(Record const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Record", modifiers: "&&", def_value: None }]
constexpr Record(Record&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Record(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Record& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Record& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Record& operator=(Record&& o) noexcept = default;
  constexpr Record& operator=(Record const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_sortOrder, put=__set_sortOrder))  sortOrder;

constexpr void __set_sortOrder(int32_t value) ;

constexpr int32_t __get_sortOrder() const;

 ::StringW __declspec(property(get=__get_category, put=__set_category))  category;

constexpr void __set_category(::StringW value) ;

constexpr ::StringW __get_category() const;

 ::StringW __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(::StringW value) ;

constexpr ::StringW __get_message() const;


// Methods

// Ctor Parameters [CppParam { name: "order", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cat", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "msg", ty: "::StringW", modifiers: "", def_value: None }]
explicit Record(int32_t order, ::StringW cat, ::StringW msg) ;

/// @brief Method .ctor addr 0x266a8fc size 0x3c virtual false final false
 void _ctor(int32_t order, ::StringW cat, ::StringW msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Assets::OVR::Scripts
NEED_NO_BOX(Assets::OVR::Scripts::Record);
DEFINE_IL2CPP_ARG_TYPE(Assets::OVR::Scripts::Record, "Assets.OVR.Scripts", "Record");

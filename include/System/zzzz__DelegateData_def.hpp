#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class DelegateData;
}
// Type: System::DelegateData
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2587))
// CS Name: System.DelegateData
class CORDL_TYPE DelegateData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DelegateData() = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateData", modifiers: " const&", def_value: None }]
constexpr DelegateData(DelegateData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateData", modifiers: "&&", def_value: None }]
constexpr DelegateData(DelegateData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DelegateData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DelegateData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DelegateData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DelegateData& operator=(DelegateData&& o) noexcept = default;
  constexpr DelegateData& operator=(DelegateData const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_target_type, put=__set_target_type))  target_type;

constexpr void __set_target_type(System::Type value) ;

constexpr System::Type __get_target_type() const;

 ::StringW __declspec(property(get=__get_method_name, put=__set_method_name))  method_name;

constexpr void __set_method_name(::StringW value) ;

constexpr ::StringW __get_method_name() const;

 bool __declspec(property(get=__get_curried_first_arg, put=__set_curried_first_arg))  curried_first_arg;

constexpr void __set_curried_first_arg(bool value) ;

constexpr bool __get_curried_first_arg() const;


// Methods

// Ctor Parameters []
explicit DelegateData() ;

/// @brief Method .ctor addr 0x2489788 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::DelegateData);
DEFINE_IL2CPP_ARG_TYPE(System::DelegateData, "System", "DelegateData");

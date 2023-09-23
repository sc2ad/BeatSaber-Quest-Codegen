#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Dynamic::Utils {
class ContractUtils;
}
// Type: System.Dynamic.Utils::ContractUtils
namespace System::Dynamic::Utils {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14591))
// CS Name: System.Dynamic.Utils.ContractUtils
class CORDL_TYPE ContractUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ContractUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContractUtils", modifiers: " const&", def_value: None }]
constexpr ContractUtils(ContractUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContractUtils", modifiers: "&&", def_value: None }]
constexpr ContractUtils(ContractUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContractUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ContractUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContractUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContractUtils& operator=(ContractUtils&& o) noexcept = default;
  constexpr ContractUtils& operator=(ContractUtils const& o) noexcept = default;
                


// Properties

static System::Exception __declspec(property(get=get_Unreachable))  Unreachable;


// Methods

/// @brief Method get_Unreachable addr 0x268243c size 0x74 virtual false final false
static System::Exception get_Unreachable() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Dynamic::Utils
NEED_NO_BOX(System::Dynamic::Utils::ContractUtils);
DEFINE_IL2CPP_ARG_TYPE(System::Dynamic::Utils::ContractUtils, "System.Dynamic.Utils", "ContractUtils");

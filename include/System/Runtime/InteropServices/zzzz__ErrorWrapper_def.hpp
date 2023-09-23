#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Runtime::InteropServices {
class ErrorWrapper;
}
// Type: System.Runtime.InteropServices::ErrorWrapper
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3305))
// CS Name: System.Runtime.InteropServices.ErrorWrapper
class CORDL_TYPE ErrorWrapper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ErrorWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "ErrorWrapper", modifiers: " const&", def_value: None }]
constexpr ErrorWrapper(ErrorWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ErrorWrapper", modifiers: "&&", def_value: None }]
constexpr ErrorWrapper(ErrorWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ErrorWrapper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ErrorWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ErrorWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ErrorWrapper& operator=(ErrorWrapper&& o) noexcept = default;
  constexpr ErrorWrapper& operator=(ErrorWrapper const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_ErrorCode, put=__set_m_ErrorCode))  m_ErrorCode;

constexpr void __set_m_ErrorCode(int32_t value) ;

constexpr int32_t __get_m_ErrorCode() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::ErrorWrapper);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ErrorWrapper, "System.Runtime.InteropServices", "ErrorWrapper");

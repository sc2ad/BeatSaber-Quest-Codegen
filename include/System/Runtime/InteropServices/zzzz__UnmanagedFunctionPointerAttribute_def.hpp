#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace System::Runtime::InteropServices {
struct CallingConvention;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class UnmanagedFunctionPointerAttribute;
}
// Type: System.Runtime.InteropServices::UnmanagedFunctionPointerAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3307))
// CS Name: System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
class CORDL_TYPE UnmanagedFunctionPointerAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnmanagedFunctionPointerAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmanagedFunctionPointerAttribute", modifiers: " const&", def_value: None }]
constexpr UnmanagedFunctionPointerAttribute(UnmanagedFunctionPointerAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmanagedFunctionPointerAttribute", modifiers: "&&", def_value: None }]
constexpr UnmanagedFunctionPointerAttribute(UnmanagedFunctionPointerAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnmanagedFunctionPointerAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr UnmanagedFunctionPointerAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnmanagedFunctionPointerAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnmanagedFunctionPointerAttribute& operator=(UnmanagedFunctionPointerAttribute&& o) noexcept = default;
  constexpr UnmanagedFunctionPointerAttribute& operator=(UnmanagedFunctionPointerAttribute const& o) noexcept = default;
                


// Fields

 System::Runtime::InteropServices::CallingConvention __declspec(property(get=__get_m_callingConvention, put=__set_m_callingConvention))  m_callingConvention;

constexpr void __set_m_callingConvention(System::Runtime::InteropServices::CallingConvention value) ;

constexpr System::Runtime::InteropServices::CallingConvention __get_m_callingConvention() const;


// Methods

static System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute New_ctor(System::Runtime::InteropServices::CallingConvention callingConvention) ;

/// @brief Method .ctor addr 0x236aba0 size 0x28 virtual false final false
 void _ctor(System::Runtime::InteropServices::CallingConvention callingConvention) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute, "System.Runtime.InteropServices", "UnmanagedFunctionPointerAttribute");

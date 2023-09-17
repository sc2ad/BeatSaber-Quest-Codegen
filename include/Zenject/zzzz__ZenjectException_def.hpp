#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace Zenject {
class ZenjectException;
}
// Type: Zenject::ZenjectException
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11303))
// CS Name: Zenject.ZenjectException
class CORDL_TYPE ZenjectException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ZenjectException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectException", modifiers: " const&", def_value: None }]
constexpr ZenjectException(ZenjectException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectException", modifiers: "&&", def_value: None }]
constexpr ZenjectException(ZenjectException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZenjectException(void* ptr) noexcept : ::System::Exception(ptr) {
}


  constexpr ZenjectException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZenjectException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZenjectException& operator=(ZenjectException&& o) noexcept = default;
  constexpr ZenjectException& operator=(ZenjectException const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit ZenjectException(::StringW message) ;

/// @brief Method .ctor addr 0x2da6c90 size 0x68 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit ZenjectException(::StringW message, ::System::Exception innerException) ;

/// @brief Method .ctor addr 0x2da6cf8 size 0x70 virtual false final false
 void _ctor(::StringW message, ::System::Exception innerException) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::ZenjectException);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectException, "Zenject", "ZenjectException");

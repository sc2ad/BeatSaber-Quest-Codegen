#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace Zenject {
class PoolExceededFixedSizeException;
}
// Type: Zenject::PoolExceededFixedSizeException
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10989))
// CS Name: Zenject.PoolExceededFixedSizeException
class CORDL_TYPE PoolExceededFixedSizeException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PoolExceededFixedSizeException() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolExceededFixedSizeException", modifiers: " const&", def_value: None }]
constexpr PoolExceededFixedSizeException(PoolExceededFixedSizeException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolExceededFixedSizeException", modifiers: "&&", def_value: None }]
constexpr PoolExceededFixedSizeException(PoolExceededFixedSizeException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolExceededFixedSizeException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr PoolExceededFixedSizeException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolExceededFixedSizeException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolExceededFixedSizeException& operator=(PoolExceededFixedSizeException&& o) noexcept = default;
  constexpr PoolExceededFixedSizeException& operator=(PoolExceededFixedSizeException const& o) noexcept = default;
                


// Methods

static Zenject::PoolExceededFixedSizeException New_ctor(::StringW errorMessage) ;

/// @brief Method .ctor addr 0x2d6f230 size 0x68 virtual false final false
 void _ctor(::StringW errorMessage) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::PoolExceededFixedSizeException);
DEFINE_IL2CPP_ARG_TYPE(Zenject::PoolExceededFixedSizeException, "Zenject", "PoolExceededFixedSizeException");

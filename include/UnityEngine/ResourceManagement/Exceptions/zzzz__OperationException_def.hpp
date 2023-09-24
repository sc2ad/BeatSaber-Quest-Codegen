#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Exceptions {
class OperationException;
}
// Type: UnityEngine.ResourceManagement.Exceptions::OperationException
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14244))
// CS Name: UnityEngine.ResourceManagement.Exceptions.OperationException
class CORDL_TYPE OperationException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~OperationException() = default;

// Ctor Parameters [CppParam { name: "", ty: "OperationException", modifiers: " const&", def_value: None }]
constexpr OperationException(OperationException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OperationException", modifiers: "&&", def_value: None }]
constexpr OperationException(OperationException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OperationException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr OperationException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OperationException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OperationException& operator=(OperationException&& o) noexcept = default;
  constexpr OperationException& operator=(OperationException const& o) noexcept = default;
                


// Methods

static UnityEngine::ResourceManagement::Exceptions::OperationException New_ctor(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x2a3871c size 0x70 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

/// @brief Method ToString addr 0x2a3878c size 0x88 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Exceptions
NEED_NO_BOX(UnityEngine::ResourceManagement::Exceptions::OperationException);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Exceptions::OperationException, "UnityEngine.ResourceManagement.Exceptions", "OperationException");

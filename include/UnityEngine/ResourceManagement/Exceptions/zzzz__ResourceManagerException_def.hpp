#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Exceptions {
class ResourceManagerException;
}
// Type: UnityEngine.ResourceManagement.Exceptions::ResourceManagerException
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14242))
// CS Name: UnityEngine.ResourceManagement.Exceptions.ResourceManagerException
class CORDL_TYPE ResourceManagerException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ResourceManagerException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManagerException", modifiers: " const&", def_value: None }]
constexpr ResourceManagerException(ResourceManagerException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManagerException", modifiers: "&&", def_value: None }]
constexpr ResourceManagerException(ResourceManagerException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResourceManagerException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr ResourceManagerException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResourceManagerException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResourceManagerException& operator=(ResourceManagerException&& o) noexcept = default;
  constexpr ResourceManagerException& operator=(ResourceManagerException const& o) noexcept = default;
                


// Methods

static UnityEngine::ResourceManagement::Exceptions::ResourceManagerException New_ctor() ;

/// @brief Method .ctor addr 0x2a382a4 size 0x58 virtual false final false
 void _ctor() ;

static UnityEngine::ResourceManagement::Exceptions::ResourceManagerException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x2a382fc size 0x68 virtual false final false
 void _ctor(::StringW message) ;

static UnityEngine::ResourceManagement::Exceptions::ResourceManagerException New_ctor(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x2a38364 size 0x70 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

static UnityEngine::ResourceManagement::Exceptions::ResourceManagerException New_ctor(System::Runtime::Serialization::SerializationInfo message, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2a383d4 size 0x80 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo message, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method ToString addr 0x2a38454 size 0x88 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Exceptions
NEED_NO_BOX(UnityEngine::ResourceManagement::Exceptions::ResourceManagerException);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Exceptions::ResourceManagerException, "UnityEngine.ResourceManagement.Exceptions", "ResourceManagerException");

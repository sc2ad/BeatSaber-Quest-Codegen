#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__OperationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Exceptions {
class ProviderException;
}
// Type: UnityEngine.ResourceManagement.Exceptions::ProviderException
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14244))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14245))
// CS Name: UnityEngine.ResourceManagement.Exceptions.ProviderException
class CORDL_TYPE ProviderException : public UnityEngine::ResourceManagement::Exceptions::OperationException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~ProviderException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProviderException", modifiers: " const&", def_value: None }]
constexpr ProviderException(ProviderException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProviderException", modifiers: "&&", def_value: None }]
constexpr ProviderException(ProviderException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProviderException(void* ptr) noexcept : UnityEngine::ResourceManagement::Exceptions::OperationException(ptr) {
}


  constexpr ProviderException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProviderException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProviderException& operator=(ProviderException&& o) noexcept = default;
  constexpr ProviderException& operator=(ProviderException const& o) noexcept = default;
                


// Fields

 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __declspec(property(get=__get__Location_k__BackingField, put=__set__Location_k__BackingField))  _Location_k__BackingField;

constexpr void __set__Location_k__BackingField(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation value) ;

constexpr UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __get__Location_k__BackingField() const;


// Properties

 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __declspec(property(get=get_Location))  Location;


// Methods

static UnityEngine::ResourceManagement::Exceptions::ProviderException New_ctor(::StringW message, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, System::Exception innerException) ;

/// @brief Method .ctor addr 0x2a38814 size 0x28 virtual false final false
 void _ctor(::StringW message, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, System::Exception innerException) ;

/// @brief Method get_Location addr 0x2a3883c size 0x8 virtual false final false
 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation get_Location() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Exceptions
NEED_NO_BOX(UnityEngine::ResourceManagement::Exceptions::ProviderException);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Exceptions::ProviderException, "UnityEngine.ResourceManagement.Exceptions", "ProviderException");

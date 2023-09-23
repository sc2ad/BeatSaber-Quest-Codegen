#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__ResourceManagerException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Exceptions {
class UnknownResourceProviderException;
}
// Type: UnityEngine.ResourceManagement.Exceptions::UnknownResourceProviderException
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14242))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14243))
// CS Name: UnityEngine.ResourceManagement.Exceptions.UnknownResourceProviderException
class CORDL_TYPE UnknownResourceProviderException : public UnityEngine::ResourceManagement::Exceptions::ResourceManagerException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~UnknownResourceProviderException() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnknownResourceProviderException", modifiers: " const&", def_value: None }]
constexpr UnknownResourceProviderException(UnknownResourceProviderException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnknownResourceProviderException", modifiers: "&&", def_value: None }]
constexpr UnknownResourceProviderException(UnknownResourceProviderException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnknownResourceProviderException(void* ptr) noexcept : UnityEngine::ResourceManagement::Exceptions::ResourceManagerException(ptr) {
}


  constexpr UnknownResourceProviderException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnknownResourceProviderException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnknownResourceProviderException& operator=(UnknownResourceProviderException&& o) noexcept = default;
  constexpr UnknownResourceProviderException& operator=(UnknownResourceProviderException const& o) noexcept = default;
                


// Fields

 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __declspec(property(get=__get__Location_k__BackingField, put=__set__Location_k__BackingField))  _Location_k__BackingField;

constexpr void __set__Location_k__BackingField(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation value) ;

constexpr UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __get__Location_k__BackingField() const;


// Properties

 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __declspec(property(get=get_Location, put=set_Location))  Location;

 ::StringW __declspec(property(get=get_Message))  Message;


// Methods

/// @brief Method get_Location addr 0x2a384dc size 0x8 virtual false final false
 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation get_Location() ;

/// @brief Method set_Location addr 0x2a384e4 size 0x8 virtual false final false
 void set_Location(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation value) ;

// Ctor Parameters [CppParam { name: "location", ty: "UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation", modifiers: "", def_value: None }]
explicit UnknownResourceProviderException(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

/// @brief Method .ctor addr 0x2a34260 size 0x24 virtual false final false
 void _ctor(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

// Ctor Parameters []
explicit UnknownResourceProviderException() ;

/// @brief Method .ctor addr 0x2a384ec size 0x4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit UnknownResourceProviderException(::StringW message) ;

/// @brief Method .ctor addr 0x2a384f0 size 0x4 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }]
explicit UnknownResourceProviderException(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x2a384f4 size 0x4 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "message", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit UnknownResourceProviderException(System::Runtime::Serialization::SerializationInfo message, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2a384f8 size 0x4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo message, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Message addr 0x2a384fc size 0x214 virtual true final false
 ::StringW get_Message() ;

/// @brief Method ToString addr 0x2a38710 size 0xc virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Exceptions
NEED_NO_BOX(UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException, "UnityEngine.ResourceManagement.Exceptions", "UnknownResourceProviderException");

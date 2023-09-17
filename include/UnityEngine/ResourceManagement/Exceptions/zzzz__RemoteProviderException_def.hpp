#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__ProviderException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System {
class Exception;
}
namespace UnityEngine::ResourceManagement::Util {
class UnityWebRequestResult;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Exceptions {
class RemoteProviderException;
}
// Type: UnityEngine.ResourceManagement.Exceptions::RemoteProviderException
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14245))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14246))
// CS Name: UnityEngine.ResourceManagement.Exceptions.RemoteProviderException
class CORDL_TYPE RemoteProviderException : public ::UnityEngine::ResourceManagement::Exceptions::ProviderException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~RemoteProviderException() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProviderException", modifiers: " const&", def_value: None }]
constexpr RemoteProviderException(RemoteProviderException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProviderException", modifiers: "&&", def_value: None }]
constexpr RemoteProviderException(RemoteProviderException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteProviderException(void* ptr) noexcept : ::UnityEngine::ResourceManagement::Exceptions::ProviderException(ptr) {
}


  constexpr RemoteProviderException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteProviderException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteProviderException& operator=(RemoteProviderException&& o) noexcept = default;
  constexpr RemoteProviderException& operator=(RemoteProviderException const& o) noexcept = default;
                


// Fields

 ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult __declspec(property(get=__get__WebRequestResult_k__BackingField, put=__set__WebRequestResult_k__BackingField))  _WebRequestResult_k__BackingField;

constexpr void __set__WebRequestResult_k__BackingField(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult value) ;

constexpr ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult __get__WebRequestResult_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Message))  Message;

 ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult __declspec(property(get=get_WebRequestResult))  WebRequestResult;


// Methods

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "location", ty: "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation", modifiers: "", def_value: None }, CppParam { name: "uwrResult", ty: "::UnityEngine::ResourceManagement::Util::UnityWebRequestResult", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit RemoteProviderException(::StringW message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult uwrResult, ::System::Exception innerException) ;

/// @brief Method .ctor addr 0x2a38844 size 0x2c virtual false final false
 void _ctor(::StringW message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult uwrResult, ::System::Exception innerException) ;

/// @brief Method get_Message addr 0x2a38870 size 0xc virtual true final false
 ::StringW get_Message() ;

/// @brief Method get_WebRequestResult addr 0x2a3887c size 0x8 virtual false final false
 ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult get_WebRequestResult() ;

/// @brief Method ToString addr 0x2a38884 size 0x174 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Exceptions
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException, "UnityEngine.ResourceManagement.Exceptions", "RemoteProviderException");

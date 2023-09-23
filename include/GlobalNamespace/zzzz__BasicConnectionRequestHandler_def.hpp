#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
class IConnectionRequestHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicConnectionRequestHandler;
}
// Type: ::BasicConnectionRequestHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12625))
// CS Name: BasicConnectionRequestHandler
class CORDL_TYPE BasicConnectionRequestHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IConnectionRequestHandler
constexpr operator  GlobalNamespace::IConnectionRequestHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BasicConnectionRequestHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicConnectionRequestHandler", modifiers: " const&", def_value: None }]
constexpr BasicConnectionRequestHandler(BasicConnectionRequestHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicConnectionRequestHandler", modifiers: "&&", def_value: None }]
constexpr BasicConnectionRequestHandler(BasicConnectionRequestHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicConnectionRequestHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BasicConnectionRequestHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicConnectionRequestHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicConnectionRequestHandler& operator=(BasicConnectionRequestHandler&& o) noexcept = default;
  constexpr BasicConnectionRequestHandler& operator=(BasicConnectionRequestHandler const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__secret_k__BackingField, put=__set__secret_k__BackingField))  _secret_k__BackingField;

constexpr void __set__secret_k__BackingField(::StringW value) ;

constexpr ::StringW __get__secret_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_secret, put=set_secret))  secret;


// Methods

/// @brief Method get_secret addr 0xd9c9d8 size 0x8 virtual false final false
 ::StringW get_secret() ;

/// @brief Method set_secret addr 0xd9c9e0 size 0x8 virtual false final false
 void set_secret(::StringW value) ;

/// @brief Method GetConnectionMessage addr 0xd9c9e8 size 0x70 virtual true final true
 void GetConnectionMessage(LiteNetLib::Utils::NetDataWriter writer, ::StringW userId, ::StringW userName, bool isConnectionOwner) ;

/// @brief Method ValidateConnectionMessage addr 0xd9ca58 size 0xbc virtual true final true
 bool ValidateConnectionMessage(LiteNetLib::Utils::NetDataReader reader, ByRef<::StringW> userId, ByRef<::StringW> userName, ByRef<bool> isConnectionOwner) ;

// Ctor Parameters []
explicit BasicConnectionRequestHandler() ;

/// @brief Method .ctor addr 0xd9cb14 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BasicConnectionRequestHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicConnectionRequestHandler, "", "BasicConnectionRequestHandler");

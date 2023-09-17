#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
class IConnectionRequestHandler;
}
// Type: ::IConnectionRequestHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12725))
// CS Name: IConnectionRequestHandler
class CORDL_TYPE IConnectionRequestHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IConnectionRequestHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IConnectionRequestHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetConnectionMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter writer, ::StringW userId, ::StringW userName, bool isConnectionOwner) ;

/// @brief Method ValidateConnectionMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader reader, ByRef<::StringW> userId, ByRef<::StringW> userName, ByRef<bool> isConnectionOwner) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IConnectionRequestHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IConnectionRequestHandler, "", "IConnectionRequestHandler");

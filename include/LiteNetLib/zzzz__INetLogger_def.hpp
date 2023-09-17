#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace LiteNetLib {
struct NetLogLevel;
}
// Forward declare root types
namespace LiteNetLib {
class INetLogger;
}
// Type: LiteNetLib::INetLogger
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14439))
// CS Name: LiteNetLib.INetLogger
class CORDL_TYPE INetLogger : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INetLogger() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INetLogger(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method WriteNet addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteNet(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
} // end anonymous namespace
NEED_NO_BOX(::LiteNetLib::INetLogger);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::INetLogger, "LiteNetLib", "INetLogger");

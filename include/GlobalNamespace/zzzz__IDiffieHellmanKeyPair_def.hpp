#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace BGNet::Core {
class ITaskUtility;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IDiffieHellmanKeyPair;
}
// Type: ::IDiffieHellmanKeyPair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12653))
// CS Name: IDiffieHellmanKeyPair
class CORDL_TYPE IDiffieHellmanKeyPair : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDiffieHellmanKeyPair() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDiffieHellmanKeyPair(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_publicKey))  publicKey;


// Methods

/// @brief Method get_publicKey addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> get_publicKey() ;

/// @brief Method GetPreMasterSecretAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> GetPreMasterSecretAsync(::BGNet::Core::ITaskUtility taskUtility, ::ArrayW<uint8_t> clientPublicKey) ;

/// @brief Method GetPreMasterSecret addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetPreMasterSecret(::ArrayW<uint8_t> clientPublicKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IDiffieHellmanKeyPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IDiffieHellmanKeyPair, "", "IDiffieHellmanKeyPair");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class ICertificateEncryptionProvider;
}
// Type: ::ICertificateEncryptionProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12718))
// CS Name: ICertificateEncryptionProvider
class CORDL_TYPE ICertificateEncryptionProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

~ICertificateEncryptionProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICertificateEncryptionProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SignData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> SignData(::ArrayW<uint8_t> data, int32_t offset, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ICertificateEncryptionProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ICertificateEncryptionProvider, "", "ICertificateEncryptionProvider");

#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Networking {
class CertificateHandler;
}
// Type: UnityEngine.Networking::CertificateHandler
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15559))
// CS Name: UnityEngine.Networking.CertificateHandler
class CORDL_TYPE CertificateHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CertificateHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateHandler", modifiers: " const&", def_value: None }]
constexpr CertificateHandler(CertificateHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateHandler", modifiers: "&&", def_value: None }]
constexpr CertificateHandler(CertificateHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertificateHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateHandler& operator=(CertificateHandler&& o) noexcept = default;
  constexpr CertificateHandler& operator=(CertificateHandler const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;


// Methods

/// @brief Method Release addr 0x2d377c0 size 0x3c virtual false final false
 void Release() ;

/// @brief Method ValidateCertificate addr 0x2d377fc size 0x8 virtual true final false
 bool ValidateCertificate(::ArrayW<uint8_t> certificateData) ;

/// @brief Method ValidateCertificateNative addr 0x2d37804 size 0xc virtual false final false
 bool ValidateCertificateNative(::ArrayW<uint8_t> certificateData) ;

/// @brief Method Dispose addr 0x2d35d1c size 0x94 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking
NEED_NO_BOX(UnityEngine::Networking::CertificateHandler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::CertificateHandler, "UnityEngine.Networking", "CertificateHandler");

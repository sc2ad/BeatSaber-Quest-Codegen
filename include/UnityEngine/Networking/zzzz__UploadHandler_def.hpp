#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Networking {
class UploadHandler;
}
// Type: UnityEngine.Networking::UploadHandler
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15558))
// CS Name: UnityEngine.Networking.UploadHandler
class CORDL_TYPE UploadHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UploadHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "UploadHandler", modifiers: " const&", def_value: None }]
constexpr UploadHandler(UploadHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UploadHandler", modifiers: "&&", def_value: None }]
constexpr UploadHandler(UploadHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UploadHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UploadHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UploadHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UploadHandler& operator=(UploadHandler&& o) noexcept = default;
  constexpr UploadHandler& operator=(UploadHandler const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;


// Methods

/// @brief Method Release addr 0x2d376f0 size 0x3c virtual false final false
 void Release() ;

/// @brief Method Dispose addr 0x2d3772c size 0x94 virtual true final false
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking
NEED_NO_BOX(UnityEngine::Networking::UploadHandler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UploadHandler, "UnityEngine.Networking", "UploadHandler");

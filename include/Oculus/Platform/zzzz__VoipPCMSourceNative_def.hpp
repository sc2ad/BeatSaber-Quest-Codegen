#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace Oculus::Platform {
class IVoipPCMSource;
}
// Forward declare root types
namespace Oculus::Platform {
class VoipPCMSourceNative;
}
// Type: Oculus.Platform::VoipPCMSourceNative
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13375))
// CS Name: Oculus.Platform.VoipPCMSourceNative
class CORDL_TYPE VoipPCMSourceNative : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Oculus::Platform::IVoipPCMSource
constexpr operator  Oculus::Platform::IVoipPCMSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~VoipPCMSourceNative() = default;

// Ctor Parameters [CppParam { name: "", ty: "VoipPCMSourceNative", modifiers: " const&", def_value: None }]
constexpr VoipPCMSourceNative(VoipPCMSourceNative const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VoipPCMSourceNative", modifiers: "&&", def_value: None }]
constexpr VoipPCMSourceNative(VoipPCMSourceNative&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VoipPCMSourceNative(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VoipPCMSourceNative& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VoipPCMSourceNative& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VoipPCMSourceNative& operator=(VoipPCMSourceNative&& o) noexcept = default;
  constexpr VoipPCMSourceNative& operator=(VoipPCMSourceNative const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_senderID, put=__set_senderID))  senderID;

constexpr void __set_senderID(uint64_t value) ;

constexpr uint64_t __get_senderID() const;


// Methods

/// @brief Method GetPCM addr 0x259b5d0 size 0xb4 virtual true final true
 int32_t GetPCM(::ArrayW<float_t> dest, int32_t length) ;

/// @brief Method SetSenderID addr 0x259b684 size 0x8 virtual true final true
 void SetSenderID(uint64_t senderID) ;

/// @brief Method PeekSizeElements addr 0x259b68c size 0x94 virtual true final true
 int32_t PeekSizeElements() ;

/// @brief Method Update addr 0x259b720 size 0x4 virtual true final true
 void Update() ;

// Ctor Parameters []
explicit VoipPCMSourceNative() ;

/// @brief Method .ctor addr 0x259aa74 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::VoipPCMSourceNative);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::VoipPCMSourceNative, "Oculus.Platform", "VoipPCMSourceNative");

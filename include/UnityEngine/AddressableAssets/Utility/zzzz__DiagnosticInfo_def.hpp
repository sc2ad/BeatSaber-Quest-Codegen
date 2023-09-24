#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::ResourceManagement {
struct UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Utility {
class DiagnosticInfo;
}
// Type: UnityEngine.AddressableAssets.Utility::DiagnosticInfo
namespace UnityEngine::AddressableAssets::Utility {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14381))
// CS Name: UnityEngine.AddressableAssets.Utility.DiagnosticInfo
class CORDL_TYPE DiagnosticInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DiagnosticInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticInfo", modifiers: " const&", def_value: None }]
constexpr DiagnosticInfo(DiagnosticInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticInfo", modifiers: "&&", def_value: None }]
constexpr DiagnosticInfo(DiagnosticInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DiagnosticInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DiagnosticInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DiagnosticInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DiagnosticInfo& operator=(DiagnosticInfo&& o) noexcept = default;
  constexpr DiagnosticInfo& operator=(DiagnosticInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_DisplayName, put=__set_DisplayName))  DisplayName;

constexpr void __set_DisplayName(::StringW value) ;

constexpr ::StringW __get_DisplayName() const;

 int32_t __declspec(property(get=__get_ObjectId, put=__set_ObjectId))  ObjectId;

constexpr void __set_ObjectId(int32_t value) ;

constexpr int32_t __get_ObjectId() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_Dependencies, put=__set_Dependencies))  Dependencies;

constexpr void __set_Dependencies(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_Dependencies() const;


// Methods

/// @brief Method CreateEvent addr 0x2896e00 size 0x44 virtual false final false
 UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent CreateEvent(::StringW category, UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType eventType, int32_t frame, int32_t val) ;

static UnityEngine::AddressableAssets::Utility::DiagnosticInfo New_ctor() ;

/// @brief Method .ctor addr 0x2896e44 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::Utility
NEED_NO_BOX(UnityEngine::AddressableAssets::Utility::DiagnosticInfo);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Utility::DiagnosticInfo, "UnityEngine.AddressableAssets.Utility", "DiagnosticInfo");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ReferenceCountingCache_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class AudioReferenceCountingCache;
}
// Type: ::AudioReferenceCountingCache
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15606)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6001), inst: 3688 }), TypeDefinitionIndex(TypeDefinitionIndex(6001)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 266 }), TypeDefinitionIndex(TypeDefinitionIndex(2770))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5977))
// CS Name: AudioReferenceCountingCache
class CORDL_TYPE AudioReferenceCountingCache : public GlobalNamespace::ReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AudioReferenceCountingCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioReferenceCountingCache", modifiers: " const&", def_value: None }]
constexpr AudioReferenceCountingCache(AudioReferenceCountingCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioReferenceCountingCache", modifiers: "&&", def_value: None }]
constexpr AudioReferenceCountingCache(AudioReferenceCountingCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioReferenceCountingCache(void* ptr) noexcept : GlobalNamespace::ReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>>(ptr) {
}


  constexpr AudioReferenceCountingCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioReferenceCountingCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioReferenceCountingCache& operator=(AudioReferenceCountingCache&& o) noexcept = default;
  constexpr AudioReferenceCountingCache& operator=(AudioReferenceCountingCache const& o) noexcept = default;
                


// Methods

static GlobalNamespace::AudioReferenceCountingCache New_ctor() ;

/// @brief Method .ctor addr 0x21a192c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AudioReferenceCountingCache);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioReferenceCountingCache, "", "AudioReferenceCountingCache");

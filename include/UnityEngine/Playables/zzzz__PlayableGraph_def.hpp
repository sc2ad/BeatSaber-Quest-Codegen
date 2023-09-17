#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class IExposedPropertyTable;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
struct FrameRate;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Type: UnityEngine.Playables::PlayableGraph
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10371))
// CS Name: UnityEngine.Playables.PlayableGraph
struct CORDL_TYPE PlayableGraph : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr PlayableGraph(::cordl_internals::intptr_t m_Handle, uint32_t m_Version) noexcept;


                    constexpr PlayableGraph(PlayableGraph const&) = default;
                    constexpr PlayableGraph(PlayableGraph&&) = default;
                    constexpr PlayableGraph& operator=(PlayableGraph const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PlayableGraph& operator=(PlayableGraph&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PlayableGraph(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Handle() const;

 uint32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(uint32_t value) ;

constexpr uint32_t __get_m_Version() const;


// Methods

/// @brief Method GetRootPlayable addr 0x2b7d0b0 size 0x4 virtual false final false
 ::UnityEngine::Playables::Playable GetRootPlayable(int32_t index) ;

/// @brief Method Connect addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U,typename V>
 bool Connect(U source, int32_t sourceOutputPort, V destination, int32_t destinationInputPort) ;

/// @brief Method Evaluate addr 0x2b7d110 size 0x40 virtual false final false
 void Evaluate() ;

/// @brief Method IsValid addr 0x2b7d19c size 0x3c virtual false final false
 bool IsValid() ;

/// @brief Method IsPlaying addr 0x2b7d214 size 0x3c virtual false final false
 bool IsPlaying() ;

/// @brief Method Evaluate addr 0x2b7d150 size 0x4c virtual false final false
 void Evaluate(float_t deltaTime) ;

/// @brief Method GetResolver addr 0x2b7d2d8 size 0x3c virtual false final false
 ::UnityEngine::IExposedPropertyTable GetResolver() ;

/// @brief Method GetPlayableCount addr 0x2b7d350 size 0x3c virtual false final false
 int32_t GetPlayableCount() ;

/// @brief Method GetRootPlayableCount addr 0x2b7d3c8 size 0x3c virtual false final false
 int32_t GetRootPlayableCount() ;

/// @brief Method SynchronizeEvaluation addr 0x2b7d440 size 0x50 virtual false final false
 void SynchronizeEvaluation(::UnityEngine::Playables::PlayableGraph playable) ;

/// @brief Method CreatePlayableHandle addr 0x2b7cb60 size 0x54 virtual false final false
 ::UnityEngine::Playables::PlayableHandle CreatePlayableHandle() ;

/// @brief Method CreateScriptOutputInternal addr 0x2b7c920 size 0x54 virtual false final false
 bool CreateScriptOutputInternal(::StringW name, ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle) ;

/// @brief Method GetRootPlayableInternal addr 0x2b7d0b4 size 0x5c virtual false final false
 ::UnityEngine::Playables::PlayableHandle GetRootPlayableInternal(int32_t index) ;

/// @brief Method IsMatchFrameRateEnabled addr 0x2b7d5c0 size 0x3c virtual false final false
 bool IsMatchFrameRateEnabled() ;

/// @brief Method GetFrameRate addr 0x2b7d638 size 0x4c virtual false final false
 ::UnityEngine::Playables::FrameRate GetFrameRate() ;

/// @brief Method ConnectInternal addr 0x2b7d6c8 size 0x74 virtual false final false
 bool ConnectInternal(::UnityEngine::Playables::PlayableHandle source, int32_t sourceOutputPort, ::UnityEngine::Playables::PlayableHandle destination, int32_t destinationInputPort) ;

/// @brief Method IsValid_Injected addr 0x2b7d1d8 size 0x3c virtual false final false
static bool IsValid_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self) ;

/// @brief Method IsPlaying_Injected addr 0x2b7d250 size 0x3c virtual false final false
static bool IsPlaying_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self) ;

/// @brief Method Evaluate_Injected addr 0x2b7d28c size 0x4c virtual false final false
static void Evaluate_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self, float_t deltaTime) ;

/// @brief Method GetResolver_Injected addr 0x2b7d314 size 0x3c virtual false final false
static ::UnityEngine::IExposedPropertyTable GetResolver_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self) ;

/// @brief Method GetPlayableCount_Injected addr 0x2b7d38c size 0x3c virtual false final false
static int32_t GetPlayableCount_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self) ;

/// @brief Method GetRootPlayableCount_Injected addr 0x2b7d404 size 0x3c virtual false final false
static int32_t GetRootPlayableCount_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self) ;

/// @brief Method SynchronizeEvaluation_Injected addr 0x2b7d490 size 0x44 virtual false final false
static void SynchronizeEvaluation_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self, ByRef<::UnityEngine::Playables::PlayableGraph> playable) ;

/// @brief Method CreatePlayableHandle_Injected addr 0x2b7d4d4 size 0x44 virtual false final false
static void CreatePlayableHandle_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self, ByRef<::UnityEngine::Playables::PlayableHandle> ret) ;

/// @brief Method CreateScriptOutputInternal_Injected addr 0x2b7d518 size 0x54 virtual false final false
static bool CreateScriptOutputInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self, ::StringW name, ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle) ;

/// @brief Method GetRootPlayableInternal_Injected addr 0x2b7d56c size 0x54 virtual false final false
static void GetRootPlayableInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self, int32_t index, ByRef<::UnityEngine::Playables::PlayableHandle> ret) ;

/// @brief Method IsMatchFrameRateEnabled_Injected addr 0x2b7d5fc size 0x3c virtual false final false
static bool IsMatchFrameRateEnabled_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self) ;

/// @brief Method GetFrameRate_Injected addr 0x2b7d684 size 0x44 virtual false final false
static void GetFrameRate_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self, ByRef<::UnityEngine::Playables::FrameRate> ret) ;

/// @brief Method ConnectInternal_Injected addr 0x2b7d73c size 0x6c virtual false final false
static bool ConnectInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self, ByRef<::UnityEngine::Playables::PlayableHandle> source, int32_t sourceOutputPort, ByRef<::UnityEngine::Playables::PlayableHandle> destination, int32_t destinationInputPort) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableGraph, "UnityEngine.Playables", "PlayableGraph");

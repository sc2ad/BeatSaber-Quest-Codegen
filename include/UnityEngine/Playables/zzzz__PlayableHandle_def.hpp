#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
struct PlayableTraversalMode;
}
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
struct PlayState;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Type: UnityEngine.Playables::PlayableHandle
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10376))
// CS Name: UnityEngine.Playables.PlayableHandle
struct CORDL_TYPE PlayableHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Playables::PlayableHandle>
constexpr operator  System::IEquatable_1<UnityEngine::Playables::PlayableHandle>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr PlayableHandle(::cordl_internals::intptr_t m_Handle, uint32_t m_Version) noexcept;


                    constexpr PlayableHandle(PlayableHandle const&) = default;
                    constexpr PlayableHandle(PlayableHandle&&) = default;
                    constexpr PlayableHandle& operator=(PlayableHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PlayableHandle& operator=(PlayableHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PlayableHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

static UnityEngine::Playables::PlayableHandle __declspec(property(get=__get_m_Null, put=__set_m_Null))  m_Null;

static void __set_m_Null(UnityEngine::Playables::PlayableHandle value) ;

static UnityEngine::Playables::PlayableHandle __get_m_Null() ;


// Properties

static UnityEngine::Playables::PlayableHandle __declspec(property(get=get_Null))  Null;


// Methods

/// @brief Method GetObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetObject() ;

/// @brief Method IsPlayableOfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 bool IsPlayableOfType() ;

/// @brief Method get_Null addr 0x2b7cd44 size 0x58 virtual false final false
static UnityEngine::Playables::PlayableHandle get_Null() ;

/// @brief Method GetInput addr 0x2b7d898 size 0x4 virtual false final false
 UnityEngine::Playables::Playable GetInput(int32_t inputPort) ;

/// @brief Method SetInputWeight addr 0x2b7d938 size 0x44 virtual false final false
 bool SetInputWeight(int32_t inputIndex, float_t weight) ;

/// @brief Method GetInputWeight addr 0x2b7da28 size 0x2c virtual false final false
 float_t GetInputWeight(int32_t inputIndex) ;

/// @brief Method op_Equality addr 0x2b7b65c size 0x88 virtual false final false
static bool op_Equality(UnityEngine::Playables::PlayableHandle x, UnityEngine::Playables::PlayableHandle y) ;

/// @brief Method Equals addr 0x2b7db0c size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType p) ;

/// @brief Method Equals addr 0x2b7db84 size 0x80 virtual true final true
 bool Equals(UnityEngine::Playables::PlayableHandle other) ;

/// @brief Method GetHashCode addr 0x2b7dc04 size 0x34 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method CompareVersion addr 0x2b7dad8 size 0x34 virtual false final false
static bool CompareVersion(UnityEngine::Playables::PlayableHandle lhs, UnityEngine::Playables::PlayableHandle rhs) ;

/// @brief Method CheckInputBounds addr 0x2b7d97c size 0x18 virtual false final false
 bool CheckInputBounds(int32_t inputIndex) ;

/// @brief Method CheckInputBounds addr 0x2b7dc38 size 0x224 virtual false final false
 bool CheckInputBounds(int32_t inputIndex, bool acceptAny) ;

/// @brief Method IsValid addr 0x2b7ded0 size 0x74 virtual false final false
 bool IsValid() ;

/// @brief Method GetPlayableType addr 0x2b7cbec size 0x74 virtual false final false
 System::Type GetPlayableType() ;

/// @brief Method SetScriptInstance addr 0x2b7dfbc size 0x84 virtual false final false
 void SetScriptInstance(::bs_hook::Il2CppWrapperType scriptInstance) ;

/// @brief Method GetPlayState addr 0x2b7e084 size 0x74 virtual false final false
 UnityEngine::Playables::PlayState GetPlayState() ;

/// @brief Method Play addr 0x2b7e134 size 0x74 virtual false final false
 void Play() ;

/// @brief Method Pause addr 0x2b7e1e4 size 0x74 virtual false final false
 void Pause() ;

/// @brief Method SetSpeed addr 0x2b7e294 size 0x84 virtual false final false
 void SetSpeed(double_t value) ;

/// @brief Method GetTime addr 0x2b7e364 size 0x74 virtual false final false
 double_t GetTime() ;

/// @brief Method SetTime addr 0x2b7e414 size 0x84 virtual false final false
 void SetTime(double_t value) ;

/// @brief Method IsDone addr 0x2b7e4e4 size 0x74 virtual false final false
 bool IsDone() ;

/// @brief Method SetDone addr 0x2b7e594 size 0x84 virtual false final false
 void SetDone(bool value) ;

/// @brief Method GetDuration addr 0x2b7e65c size 0x74 virtual false final false
 double_t GetDuration() ;

/// @brief Method SetDuration addr 0x2b7e70c size 0x84 virtual false final false
 void SetDuration(double_t value) ;

/// @brief Method SetPropagateSetTime addr 0x2b7e7dc size 0x84 virtual false final false
 void SetPropagateSetTime(bool value) ;

/// @brief Method GetGraph addr 0x2b7e8a4 size 0x8c virtual false final false
 UnityEngine::Playables::PlayableGraph GetGraph() ;

/// @brief Method GetInputCount addr 0x2b7de5c size 0x74 virtual false final false
 int32_t GetInputCount() ;

/// @brief Method SetInputCount addr 0x2b7e9b0 size 0x84 virtual false final false
 void SetInputCount(int32_t value) ;

/// @brief Method SetInputWeight addr 0x2b7ea78 size 0x98 virtual false final false
 void SetInputWeight(UnityEngine::Playables::PlayableHandle input, float_t weight) ;

/// @brief Method GetPreviousTime addr 0x2b7eb64 size 0x74 virtual false final false
 double_t GetPreviousTime() ;

/// @brief Method SetTraversalMode addr 0x2b7ec14 size 0x84 virtual false final false
 void SetTraversalMode(UnityEngine::Playables::PlayableTraversalMode mode) ;

/// @brief Method GetTimeWrapMode addr 0x2b7ecdc size 0x74 virtual false final false
 UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode() ;

/// @brief Method SetTimeWrapMode addr 0x2b7ed8c size 0x84 virtual false final false
 void SetTimeWrapMode(UnityEngine::Playables::DirectorWrapMode mode) ;

/// @brief Method GetScriptInstance addr 0x2b7ee54 size 0x74 virtual false final false
 ::bs_hook::Il2CppWrapperType GetScriptInstance() ;

/// @brief Method GetInputHandle addr 0x2b7d89c size 0x9c virtual false final false
 UnityEngine::Playables::PlayableHandle GetInputHandle(int32_t index) ;

/// @brief Method SetInputWeightFromIndex addr 0x2b7d994 size 0x94 virtual false final false
 void SetInputWeightFromIndex(int32_t index, float_t weight) ;

/// @brief Method GetInputWeightFromIndex addr 0x2b7da54 size 0x84 virtual false final false
 float_t GetInputWeightFromIndex(int32_t index) ;

/// @brief Method IsValid_Injected addr 0x2b7df44 size 0x3c virtual false final false
static bool IsValid_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self) ;

/// @brief Method GetPlayableType_Injected addr 0x2b7df80 size 0x3c virtual false final false
static System::Type GetPlayableType_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self) ;

/// @brief Method SetScriptInstance_Injected addr 0x2b7e040 size 0x44 virtual false final false
static void SetScriptInstance_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self, ::bs_hook::Il2CppWrapperType scriptInstance) ;

/// @brief Method GetPlayState_Injected addr 0x2b7e0f8 size 0x3c virtual false final false
static UnityEngine::Playables::PlayState GetPlayState_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self) ;

/// @brief Method Play_Injected addr 0x2b7e1a8 size 0x3c virtual false final false
static void Play_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self) ;

/// @brief Method Pause_Injected addr 0x2b7e258 size 0x3c virtual false final false
static void Pause_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self) ;

/// @brief Method SetSpeed_Injected addr 0x2b7e318 size 0x4c virtual false final false
static void SetSpeed_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self, double_t value) ;

/// @brief Method GetTime_Injected addr 0x2b7e3d8 size 0x3c virtual false final false
static double_t GetTime_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self) ;

/// @brief Method SetTime_Injected addr 0x2b7e498 size 0x4c virtual false final false
static void SetTime_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self, double_t value) ;

/// @brief Method IsDone_Injected addr 0x2b7e558 size 0x3c virtual false final false
static bool IsDone_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self) ;

/// @brief Method SetDone_Injected addr 0x2b7e618 size 0x44 virtual false final false
static void SetDone_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self, bool value) ;

/// @brief Method GetDuration_Injected addr 0x2b7e6d0 size 0x3c virtual false final false
static double_t GetDuration_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self) ;

/// @brief Method SetDuration_Injected addr 0x2b7e790 size 0x4c virtual false final false
static void SetDuration_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self, double_t value) ;

/// @brief Method SetPropagateSetTime_Injected addr 0x2b7e860 size 0x44 virtual false final false
static void SetPropagateSetTime_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self, bool value) ;

/// @brief Method GetGraph_Injected addr 0x2b7e930 size 0x44 virtual false final false
static void GetGraph_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self, ByRef<UnityEngine::Playables::PlayableGraph> ret) ;

/// @brief Method GetInputCount_Injected addr 0x2b7e974 size 0x3c virtual false final false
static int32_t GetInputCount_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self) ;

/// @brief Method SetInputCount_Injected addr 0x2b7ea34 size 0x44 virtual false final false
static void SetInputCount_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self, int32_t value) ;

/// @brief Method SetInputWeight_Injected addr 0x2b7eb10 size 0x54 virtual false final false
static void SetInputWeight_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self, ByRef<UnityEngine::Playables::PlayableHandle> input, float_t weight) ;

/// @brief Method GetPreviousTime_Injected addr 0x2b7ebd8 size 0x3c virtual false final false
static double_t GetPreviousTime_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self) ;

/// @brief Method SetTraversalMode_Injected addr 0x2b7ec98 size 0x44 virtual false final false
static void SetTraversalMode_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self, UnityEngine::Playables::PlayableTraversalMode mode) ;

/// @brief Method GetTimeWrapMode_Injected addr 0x2b7ed50 size 0x3c virtual false final false
static UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self) ;

/// @brief Method SetTimeWrapMode_Injected addr 0x2b7ee10 size 0x44 virtual false final false
static void SetTimeWrapMode_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self, UnityEngine::Playables::DirectorWrapMode mode) ;

/// @brief Method GetScriptInstance_Injected addr 0x2b7eec8 size 0x3c virtual false final false
static ::bs_hook::Il2CppWrapperType GetScriptInstance_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self) ;

/// @brief Method GetInputHandle_Injected addr 0x2b7ef04 size 0x54 virtual false final false
static void GetInputHandle_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self, int32_t index, ByRef<UnityEngine::Playables::PlayableHandle> ret) ;

/// @brief Method SetInputWeightFromIndex_Injected addr 0x2b7ef58 size 0x54 virtual false final false
static void SetInputWeightFromIndex_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self, int32_t index, float_t weight) ;

/// @brief Method GetInputWeightFromIndex_Injected addr 0x2b7efac size 0x44 virtual false final false
static float_t GetInputWeightFromIndex_Injected(ByRef<UnityEngine::Playables::PlayableHandle> _unity_self, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableHandle, "UnityEngine.Playables", "PlayableHandle");

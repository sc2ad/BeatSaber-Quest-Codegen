#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class YieldInstruction;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__VRsenalScoreLogger___Start_d__3;
}
namespace GlobalNamespace {
class VRsenalScoreLogger;
}
// Type: ::<Start>d__3
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3997))
// CS Name: VRsenalScoreLogger::<Start>d__3
class CORDL_TYPE GlobalNamespace__VRsenalScoreLogger___Start_d__3 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__VRsenalScoreLogger___Start_d__3() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VRsenalScoreLogger___Start_d__3", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__VRsenalScoreLogger___Start_d__3(GlobalNamespace__VRsenalScoreLogger___Start_d__3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VRsenalScoreLogger___Start_d__3", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__VRsenalScoreLogger___Start_d__3(GlobalNamespace__VRsenalScoreLogger___Start_d__3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__VRsenalScoreLogger___Start_d__3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__VRsenalScoreLogger___Start_d__3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__VRsenalScoreLogger___Start_d__3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__VRsenalScoreLogger___Start_d__3& operator=(GlobalNamespace__VRsenalScoreLogger___Start_d__3&& o) noexcept = default;
  constexpr GlobalNamespace__VRsenalScoreLogger___Start_d__3& operator=(GlobalNamespace__VRsenalScoreLogger___Start_d__3 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::VRsenalScoreLogger __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::VRsenalScoreLogger value) ;

constexpr GlobalNamespace::VRsenalScoreLogger __get___4__this() const;

 UnityEngine::YieldInstruction __declspec(property(get=__get__yieldInstruction_5__2, put=__set__yieldInstruction_5__2))  _yieldInstruction_5__2;

constexpr void __set__yieldInstruction_5__2(UnityEngine::YieldInstruction value) ;

constexpr UnityEngine::YieldInstruction __get__yieldInstruction_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__VRsenalScoreLogger___Start_d__3(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20b0080 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20b02f0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20b02f4 size 0x6bc virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20b09b0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20b09b8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20b09f8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VRsenalScoreLogger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3998))
// CS Name: VRsenalScoreLogger
class CORDL_TYPE VRsenalScoreLogger : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__3 = GlobalNamespace::GlobalNamespace__VRsenalScoreLogger___Start_d__3;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~VRsenalScoreLogger() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRsenalScoreLogger", modifiers: " const&", def_value: None }]
constexpr VRsenalScoreLogger(VRsenalScoreLogger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRsenalScoreLogger", modifiers: "&&", def_value: None }]
constexpr VRsenalScoreLogger(VRsenalScoreLogger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRsenalScoreLogger(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VRsenalScoreLogger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRsenalScoreLogger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRsenalScoreLogger& operator=(VRsenalScoreLogger&& o) noexcept = default;
  constexpr VRsenalScoreLogger& operator=(VRsenalScoreLogger const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IScoreController __declspec(property(get=__get__scoreController, put=__set__scoreController))  _scoreController;

constexpr void __set__scoreController(GlobalNamespace::IScoreController value) ;

constexpr GlobalNamespace::IScoreController __get__scoreController() const;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get__difficultyBeatmap, put=__set__difficultyBeatmap))  _difficultyBeatmap;

constexpr void __set__difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value) ;

constexpr GlobalNamespace::IDifficultyBeatmap __get__difficultyBeatmap() const;

 GlobalNamespace::ILevelEndActions __declspec(property(get=__get__levelEndActions, put=__set__levelEndActions))  _levelEndActions;

constexpr void __set__levelEndActions(GlobalNamespace::ILevelEndActions value) ;

constexpr GlobalNamespace::ILevelEndActions __get__levelEndActions() const;


// Methods

/// @brief Method Start addr 0x20b0018 size 0x68 virtual false final false
 System::Collections::IEnumerator Start() ;

/// @brief Method OnDestroy addr 0x20b00a8 size 0x108 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleLevelFinishedEvent addr 0x20b01b0 size 0x4 virtual false final false
 void HandleLevelFinishedEvent() ;

/// @brief Method LogScore addr 0x20b01b4 size 0x134 virtual false final false
 void LogScore() ;

// Ctor Parameters []
explicit VRsenalScoreLogger() ;

/// @brief Method .ctor addr 0x20b02e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__VRsenalScoreLogger___Start_d__3);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__VRsenalScoreLogger___Start_d__3, "", "VRsenalScoreLogger/<Start>d__3");
NEED_NO_BOX(GlobalNamespace::VRsenalScoreLogger);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRsenalScoreLogger, "", "VRsenalScoreLogger");

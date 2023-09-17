#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class AudioClip;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioClipLoaderSO;
}
namespace GlobalNamespace {
class GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3;
}
namespace {
// Type: ::<LoadAudioFileCoroutine>d__3
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3821), inst: 2 }), TypeDefinitionIndex(TypeDefinitionIndex(3821)), TypeDefinitionIndex(TypeDefinitionIndex(3748)), TypeDefinitionIndex(TypeDefinitionIndex(2413))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4030))
// CS Name: AudioClipLoaderSO::<LoadAudioFileCoroutine>d__3
class CORDL_TYPE GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3(GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3(GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3& operator=(GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3&& o) noexcept = default;
  constexpr GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3& operator=(GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::StringW __declspec(property(get=__get_filePath, put=__set_filePath))  filePath;

constexpr void __set_filePath(::StringW value) ;

constexpr ::StringW __get_filePath() const;

 System::Action_1<UnityEngine::AudioClip> __declspec(property(get=__get_finishCallback, put=__set_finishCallback))  finishCallback;

constexpr void __set_finishCallback(System::Action_1<UnityEngine::AudioClip> value) ;

constexpr System::Action_1<UnityEngine::AudioClip> __get_finishCallback() const;

 GlobalNamespace::AudioClipLoaderSO __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::AudioClipLoaderSO value) ;

constexpr GlobalNamespace::AudioClipLoaderSO __get___4__this() const;

 UnityEngine::Networking::UnityWebRequest __declspec(property(get=__get__www_5__2, put=__set__www_5__2))  _www_5__2;

constexpr void __set__www_5__2(UnityEngine::Networking::UnityWebRequest value) ;

constexpr UnityEngine::Networking::UnityWebRequest __get__www_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20c9d20 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20c9d50 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20c9d6c size 0x260 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x20c9fcc size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20ca07c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20ca084 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20ca0c4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AudioClipLoaderSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4031))
// CS Name: AudioClipLoaderSO
class CORDL_TYPE AudioClipLoaderSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using _LoadAudioFileCoroutine_d__3 = GlobalNamespace::GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AudioClipLoaderSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipLoaderSO", modifiers: " const&", def_value: None }]
constexpr AudioClipLoaderSO(AudioClipLoaderSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipLoaderSO", modifiers: "&&", def_value: None }]
constexpr AudioClipLoaderSO(AudioClipLoaderSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioClipLoaderSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr AudioClipLoaderSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioClipLoaderSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioClipLoaderSO& operator=(AudioClipLoaderSO&& o) noexcept = default;
  constexpr AudioClipLoaderSO& operator=(AudioClipLoaderSO const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__isLoading, put=__set__isLoading))  _isLoading;

constexpr void __set__isLoading(bool value) ;

constexpr bool __get__isLoading() const;


// Methods

/// @brief Method OnEnable addr 0x20c9bcc size 0x1c virtual true final false
 void OnEnable() ;

/// @brief Method LoadAudioFile addr 0x20c9be8 size 0xbc virtual false final false
 void LoadAudioFile(::StringW filePath, System::Action_1<UnityEngine::AudioClip> finishCallback) ;

/// @brief Method LoadAudioFileCoroutine addr 0x20c9ca4 size 0x7c virtual false final false
 System::Collections::IEnumerator LoadAudioFileCoroutine(::StringW filePath, System::Action_1<UnityEngine::AudioClip> finishCallback) ;

// Ctor Parameters []
explicit AudioClipLoaderSO() ;

/// @brief Method .ctor addr 0x20c9d48 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioClipLoaderSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipLoaderSO, "", "AudioClipLoaderSO");
NEED_NO_BOX(::GlobalNamespace::GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalNamespace__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3, "", "AudioClipLoaderSO/<LoadAudioFileCoroutine>d__3");
} // end anonymous namespace

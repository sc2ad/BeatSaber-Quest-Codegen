#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace GlobalNamespace {
template<typename K,typename V>
class HMCache_2;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3;
}
namespace GlobalNamespace {
class SimpleTextureLoader;
}
// Type: ::<LoadTextureCoroutine>d__3
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5469))
// CS Name: SimpleTextureLoader::<LoadTextureCoroutine>d__3
class CORDL_TYPE GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3(GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3(GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3& operator=(GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3&& o) noexcept = default;
  constexpr GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3& operator=(GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 bool __declspec(property(get=__get_useCache, put=__set_useCache))  useCache;

constexpr void __set_useCache(bool value) ;

constexpr bool __get_useCache() const;

 GlobalNamespace::SimpleTextureLoader __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::SimpleTextureLoader value) ;

constexpr GlobalNamespace::SimpleTextureLoader __get___4__this() const;

 ::StringW __declspec(property(get=__get_filePath, put=__set_filePath))  filePath;

constexpr void __set_filePath(::StringW value) ;

constexpr ::StringW __get_filePath() const;

 System::Action_1<UnityEngine::Texture2D> __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action_1<UnityEngine::Texture2D> value) ;

constexpr System::Action_1<UnityEngine::Texture2D> __get_finishedCallback() const;

 UnityEngine::Networking::UnityWebRequest __declspec(property(get=__get__uwr_5__2, put=__set__uwr_5__2))  _uwr_5__2;

constexpr void __set__uwr_5__2(UnityEngine::Networking::UnityWebRequest value) ;

constexpr UnityEngine::Networking::UnityWebRequest __get__uwr_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2116c38 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2116ce0 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2116cfc size 0x29c virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2116f98 size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2117048 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2117050 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2117090 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SimpleTextureLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5470))
// CS Name: SimpleTextureLoader
class CORDL_TYPE SimpleTextureLoader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _LoadTextureCoroutine_d__3 = GlobalNamespace::GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SimpleTextureLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTextureLoader", modifiers: " const&", def_value: None }]
constexpr SimpleTextureLoader(SimpleTextureLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTextureLoader", modifiers: "&&", def_value: None }]
constexpr SimpleTextureLoader(SimpleTextureLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleTextureLoader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SimpleTextureLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleTextureLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleTextureLoader& operator=(SimpleTextureLoader&& o) noexcept = default;
  constexpr SimpleTextureLoader& operator=(SimpleTextureLoader const& o) noexcept = default;
                


// Fields

 GlobalNamespace::HMCache_2<::StringW,UnityEngine::Texture2D> __declspec(property(get=__get__cache, put=__set__cache))  _cache;

constexpr void __set__cache(GlobalNamespace::HMCache_2<::StringW,UnityEngine::Texture2D> value) ;

constexpr GlobalNamespace::HMCache_2<::StringW,UnityEngine::Texture2D> __get__cache() const;

 GlobalNamespace::ICoroutineStarter __declspec(property(get=__get__coroutineStarter, put=__set__coroutineStarter))  _coroutineStarter;

constexpr void __set__coroutineStarter(GlobalNamespace::ICoroutineStarter value) ;

constexpr GlobalNamespace::ICoroutineStarter __get__coroutineStarter() const;


// Methods

/// @brief Method LoadTexture addr 0x2116ad8 size 0xd0 virtual false final false
 void LoadTexture(::StringW filePath, bool useCache, System::Action_1<UnityEngine::Texture2D> finishedCallback) ;

/// @brief Method LoadTextureCoroutine addr 0x2116ba8 size 0x90 virtual false final false
 System::Collections::IEnumerator LoadTextureCoroutine(::StringW filePath, bool useCache, System::Action_1<UnityEngine::Texture2D> finishedCallback) ;

// Ctor Parameters []
explicit SimpleTextureLoader() ;

/// @brief Method .ctor addr 0x2116c60 size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SimpleTextureLoader___LoadTextureCoroutine_d__3, "", "SimpleTextureLoader/<LoadTextureCoroutine>d__3");
NEED_NO_BOX(GlobalNamespace::SimpleTextureLoader);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleTextureLoader, "", "SimpleTextureLoader");

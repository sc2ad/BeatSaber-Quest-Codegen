#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceResponse;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
struct Int32Enum;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
struct ValueTuple_5;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
// Forward declare root types
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type TResult>
class Func_1<TResult>;
}
namespace System {
template<>
class Func_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;
}
namespace System {
template<>
class Func_1<::GlobalNamespace::AuthenticationToken>;
}
namespace System {
template<>
class Func_1<::GlobalNamespace::GetAssetBundleFileResult>;
}
namespace System {
template<>
class Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>;
}
namespace System {
template<>
class Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>;
}
namespace System {
template<>
class Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>;
}
namespace System {
template<>
class Func_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>;
}
namespace System {
template<>
class Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>;
}
namespace System {
template<>
class Func_1<::System::Int32Enum>;
}
namespace System {
template<>
class Func_1<::System::Nullable_1<int32_t>>;
}
namespace System {
template<>
class Func_1<::System::Threading::Tasks::VoidTaskResult>;
}
namespace System {
template<>
class Func_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>;
}
namespace System {
template<>
class Func_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>;
}
namespace System {
template<>
class Func_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>;
}
namespace System {
template<>
class Func_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;
}
namespace System {
template<>
class Func_1<::UnityEngine::Color>;
}
namespace System {
template<>
class Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>;
}
namespace System {
template<>
class Func_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace System {
template<>
class Func_1<bool>;
}
namespace System {
template<>
class Func_1<float_t>;
}
namespace System {
template<>
class Func_1<int32_t>;
}
namespace System {
template<>
class Func_1<int64_t>;
}
// Type: System::Func`1
// Type: System::Func`1
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 2 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 89 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 92 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 96 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 99 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 280 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::UnityEngine::Color> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Color Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 374 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 772 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 830 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<int64_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 841 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::System::Nullable_1<int32_t>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Nullable_1<int32_t> Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 847 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::GlobalNamespace::AuthenticationToken> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::AuthenticationToken Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 852 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::GlobalNamespace::GetAssetBundleFileResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::GetAssetBundleFileResult Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 867 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::System::Threading::Tasks::VoidTaskResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::VoidTaskResult Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 874 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 875 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 876 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 1088 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 1089 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 1939 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2> Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 1946 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 4825 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::System::Int32Enum> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Int32Enum Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2331))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 4905 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2331)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2331), inst: 5957 })
// CS Name: System.Func`1
class CORDL_TYPE Func_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: " const&", def_value: None }]
constexpr Func_1(Func_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
constexpr Func_1(Func_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_1& operator=(Func_1&& o) noexcept = default;
  constexpr Func_1& operator=(Func_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Func_1, "System", "Func`1");

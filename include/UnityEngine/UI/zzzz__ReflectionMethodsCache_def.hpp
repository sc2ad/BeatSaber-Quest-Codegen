#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UI {
class UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback;
}
namespace UnityEngine::UI {
class UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback;
}
namespace UnityEngine::UI {
class UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback;
}
namespace UnityEngine::UI {
class UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback;
}
namespace UnityEngine::UI {
class UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback;
}
namespace UnityEngine::UI {
class UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback;
}
namespace System {
class AsyncCallback;
}
namespace UnityEngine {
struct Ray;
}
namespace System {
class IAsyncResult;
}
namespace UnityEngine {
struct RaycastHit2D;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UI {
class ReflectionMethodsCache;
}
namespace UnityEngine::UI {
class UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback;
}
namespace UnityEngine::UI {
class UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback;
}
namespace UnityEngine::UI {
class UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback;
}
namespace UnityEngine::UI {
class UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback;
}
namespace UnityEngine::UI {
class UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback;
}
namespace UnityEngine::UI {
class UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback;
}
// Type: ::Raycast3DCallback
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13073))
// CS Name: UnityEngine.UI.ReflectionMethodsCache::Raycast3DCallback
class CORDL_TYPE UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback(UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback(UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback& operator=(UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback&& o) noexcept = default;
  constexpr UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback& operator=(UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback const& o) noexcept = default;
                


// Methods

static UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2c1541c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2c154e0 size 0x40 virtual true final false
 bool Invoke(UnityEngine::Ray r, ByRef<UnityEngine::RaycastHit> hit, float_t f, int32_t i) ;

/// @brief Method BeginInvoke addr 0x2c15520 size 0x120 virtual true final false
 System::IAsyncResult BeginInvoke(UnityEngine::Ray r, ByRef<UnityEngine::RaycastHit> hit, float_t f, int32_t i, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2c15640 size 0x2c virtual true final false
 bool EndInvoke(ByRef<UnityEngine::RaycastHit> hit, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::RaycastAllCallback
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13074))
// CS Name: UnityEngine.UI.ReflectionMethodsCache::RaycastAllCallback
class CORDL_TYPE UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback(UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback(UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback& operator=(UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback&& o) noexcept = default;
  constexpr UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback& operator=(UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback const& o) noexcept = default;
                


// Methods

static UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2c1566c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2c15730 size 0x3c virtual true final false
 ::ArrayW<UnityEngine::RaycastHit> Invoke(UnityEngine::Ray r, float_t f, int32_t i) ;

/// @brief Method BeginInvoke addr 0x2c1576c size 0xec virtual true final false
 System::IAsyncResult BeginInvoke(UnityEngine::Ray r, float_t f, int32_t i, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2c15858 size 0xc virtual true final false
 ::ArrayW<UnityEngine::RaycastHit> EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::GetRaycastNonAllocCallback
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13075))
// CS Name: UnityEngine.UI.ReflectionMethodsCache::GetRaycastNonAllocCallback
class CORDL_TYPE UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback(UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback(UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback& operator=(UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback&& o) noexcept = default;
  constexpr UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback& operator=(UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback const& o) noexcept = default;
                


// Methods

static UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2c15864 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2c15928 size 0x3c virtual true final false
 int32_t Invoke(UnityEngine::Ray r, ::ArrayW<UnityEngine::RaycastHit> results, float_t f, int32_t i) ;

/// @brief Method BeginInvoke addr 0x2c15964 size 0xf0 virtual true final false
 System::IAsyncResult BeginInvoke(UnityEngine::Ray r, ::ArrayW<UnityEngine::RaycastHit> results, float_t f, int32_t i, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2c15a54 size 0x28 virtual true final false
 int32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::Raycast2DCallback
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13076))
// CS Name: UnityEngine.UI.ReflectionMethodsCache::Raycast2DCallback
class CORDL_TYPE UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback(UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback(UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback& operator=(UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback&& o) noexcept = default;
  constexpr UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback& operator=(UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback const& o) noexcept = default;
                


// Methods

static UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2c15a7c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2c15b40 size 0x14 virtual true final false
 UnityEngine::RaycastHit2D Invoke(UnityEngine::Vector2 p1, UnityEngine::Vector2 p2, float_t f, int32_t i) ;

/// @brief Method BeginInvoke addr 0x2c15b54 size 0xfc virtual true final false
 System::IAsyncResult BeginInvoke(UnityEngine::Vector2 p1, UnityEngine::Vector2 p2, float_t f, int32_t i, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2c15c50 size 0x38 virtual true final false
 UnityEngine::RaycastHit2D EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::GetRayIntersectionAllCallback
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13077))
// CS Name: UnityEngine.UI.ReflectionMethodsCache::GetRayIntersectionAllCallback
class CORDL_TYPE UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback(UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback(UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback& operator=(UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback&& o) noexcept = default;
  constexpr UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback& operator=(UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback const& o) noexcept = default;
                


// Methods

static UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2c15c88 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2c15d4c size 0x3c virtual true final false
 ::ArrayW<UnityEngine::RaycastHit2D> Invoke(UnityEngine::Ray r, float_t f, int32_t i) ;

/// @brief Method BeginInvoke addr 0x2c15d88 size 0xec virtual true final false
 System::IAsyncResult BeginInvoke(UnityEngine::Ray r, float_t f, int32_t i, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2c15e74 size 0xc virtual true final false
 ::ArrayW<UnityEngine::RaycastHit2D> EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::GetRayIntersectionAllNonAllocCallback
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13078))
// CS Name: UnityEngine.UI.ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback
class CORDL_TYPE UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback(UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback(UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback& operator=(UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback&& o) noexcept = default;
  constexpr UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback& operator=(UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback const& o) noexcept = default;
                


// Methods

static UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2c15e80 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2c15f44 size 0x3c virtual true final false
 int32_t Invoke(UnityEngine::Ray r, ::ArrayW<UnityEngine::RaycastHit2D> results, float_t f, int32_t i) ;

/// @brief Method BeginInvoke addr 0x2c15f80 size 0xf0 virtual true final false
 System::IAsyncResult BeginInvoke(UnityEngine::Ray r, ::ArrayW<UnityEngine::RaycastHit2D> results, float_t f, int32_t i, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2c16070 size 0x28 virtual true final false
 int32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::ReflectionMethodsCache
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13079))
// CS Name: UnityEngine.UI.ReflectionMethodsCache
class CORDL_TYPE ReflectionMethodsCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using GetRayIntersectionAllNonAllocCallback = UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback;

using GetRayIntersectionAllCallback = UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback;

using Raycast2DCallback = UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback;

using GetRaycastNonAllocCallback = UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback;

using RaycastAllCallback = UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback;

using Raycast3DCallback = UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ReflectionMethodsCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache", modifiers: " const&", def_value: None }]
constexpr ReflectionMethodsCache(ReflectionMethodsCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache", modifiers: "&&", def_value: None }]
constexpr ReflectionMethodsCache(ReflectionMethodsCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionMethodsCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReflectionMethodsCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionMethodsCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionMethodsCache& operator=(ReflectionMethodsCache&& o) noexcept = default;
  constexpr ReflectionMethodsCache& operator=(ReflectionMethodsCache const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback __declspec(property(get=__get_raycast3D, put=__set_raycast3D))  raycast3D;

constexpr void __set_raycast3D(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback value) ;

constexpr UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback __get_raycast3D() const;

 UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback __declspec(property(get=__get_raycast3DAll, put=__set_raycast3DAll))  raycast3DAll;

constexpr void __set_raycast3DAll(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback value) ;

constexpr UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback __get_raycast3DAll() const;

 UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback __declspec(property(get=__get_getRaycastNonAlloc, put=__set_getRaycastNonAlloc))  getRaycastNonAlloc;

constexpr void __set_getRaycastNonAlloc(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback value) ;

constexpr UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback __get_getRaycastNonAlloc() const;

 UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback __declspec(property(get=__get_raycast2D, put=__set_raycast2D))  raycast2D;

constexpr void __set_raycast2D(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback value) ;

constexpr UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback __get_raycast2D() const;

 UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback __declspec(property(get=__get_getRayIntersectionAll, put=__set_getRayIntersectionAll))  getRayIntersectionAll;

constexpr void __set_getRayIntersectionAll(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback value) ;

constexpr UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback __get_getRayIntersectionAll() const;

 UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback __declspec(property(get=__get_getRayIntersectionAllNonAlloc, put=__set_getRayIntersectionAllNonAlloc))  getRayIntersectionAllNonAlloc;

constexpr void __set_getRayIntersectionAllNonAlloc(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback value) ;

constexpr UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback __get_getRayIntersectionAllNonAlloc() const;

static UnityEngine::UI::ReflectionMethodsCache __declspec(property(get=__get_s_ReflectionMethodsCache, put=__set_s_ReflectionMethodsCache))  s_ReflectionMethodsCache;

static void __set_s_ReflectionMethodsCache(UnityEngine::UI::ReflectionMethodsCache value) ;

static UnityEngine::UI::ReflectionMethodsCache __get_s_ReflectionMethodsCache() ;


// Properties

static UnityEngine::UI::ReflectionMethodsCache __declspec(property(get=get_Singleton))  Singleton;


// Methods

static UnityEngine::UI::ReflectionMethodsCache New_ctor() ;

/// @brief Method .ctor addr 0x2c1478c size 0xc14 virtual false final false
 void _ctor() ;

/// @brief Method get_Singleton addr 0x2c153a0 size 0x7c virtual false final false
static UnityEngine::UI::ReflectionMethodsCache get_Singleton() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::ReflectionMethodsCache);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ReflectionMethodsCache, "UnityEngine.UI", "ReflectionMethodsCache");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllCallback, "UnityEngine.UI", "ReflectionMethodsCache/GetRayIntersectionAllCallback");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback, "UnityEngine.UI", "ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__GetRaycastNonAllocCallback, "UnityEngine.UI", "ReflectionMethodsCache/GetRaycastNonAllocCallback");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__Raycast2DCallback, "UnityEngine.UI", "ReflectionMethodsCache/Raycast2DCallback");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__Raycast3DCallback, "UnityEngine.UI", "ReflectionMethodsCache/Raycast3DCallback");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__ReflectionMethodsCache__RaycastAllCallback, "UnityEngine.UI", "ReflectionMethodsCache/RaycastAllCallback");

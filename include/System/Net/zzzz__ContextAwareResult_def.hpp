#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__LazyAsyncResult_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class ContextCallback;
}
// Forward declare root types
namespace System::Net {
struct System__Net__ContextAwareResult__StateFlags;
}
namespace System::Net {
class ContextAwareResult;
}
namespace System::Net {
class System__Net__ContextAwareResult____c;
}
// Type: ::StateFlags
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7869))
// CS Name: System.Net.ContextAwareResult::StateFlags
struct CORDL_TYPE System__Net__ContextAwareResult__StateFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr System__Net__ContextAwareResult__StateFlags(uint8_t value__) noexcept;


                    constexpr System__Net__ContextAwareResult__StateFlags(System__Net__ContextAwareResult__StateFlags const&) = default;
                    constexpr System__Net__ContextAwareResult__StateFlags(System__Net__ContextAwareResult__StateFlags&&) = default;
                    constexpr System__Net__ContextAwareResult__StateFlags& operator=(System__Net__ContextAwareResult__StateFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__ContextAwareResult__StateFlags& operator=(System__Net__ContextAwareResult__StateFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__ContextAwareResult__StateFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Net__ContextAwareResult__StateFlags_Unwrapped : uint8_t {
__None = 0u,
__CaptureIdentity = 1u,
__CaptureContext = 2u,
__ThreadSafeContextCopy = 4u,
__PostBlockStarted = 8u,
__PostBlockFinished = 16u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Net__ContextAwareResult__StateFlags_Unwrapped () const noexcept {
return std::bit_cast<__System__Net__ContextAwareResult__StateFlags_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field None offset 0
static System::Net::System__Net__ContextAwareResult__StateFlags const None;

/// @brief Field CaptureIdentity offset 0
static System::Net::System__Net__ContextAwareResult__StateFlags const CaptureIdentity;

/// @brief Field CaptureContext offset 0
static System::Net::System__Net__ContextAwareResult__StateFlags const CaptureContext;

/// @brief Field ThreadSafeContextCopy offset 0
static System::Net::System__Net__ContextAwareResult__StateFlags const ThreadSafeContextCopy;

/// @brief Field PostBlockStarted offset 0
static System::Net::System__Net__ContextAwareResult__StateFlags const PostBlockStarted;

/// @brief Field PostBlockFinished offset 0
static System::Net::System__Net__ContextAwareResult__StateFlags const PostBlockFinished;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<>c
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7870))
// CS Name: System.Net.ContextAwareResult::<>c
class CORDL_TYPE System__Net__ContextAwareResult____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__ContextAwareResult____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__ContextAwareResult____c", modifiers: " const&", def_value: None }]
constexpr System__Net__ContextAwareResult____c(System__Net__ContextAwareResult____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__ContextAwareResult____c", modifiers: "&&", def_value: None }]
constexpr System__Net__ContextAwareResult____c(System__Net__ContextAwareResult____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__ContextAwareResult____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__ContextAwareResult____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__ContextAwareResult____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__ContextAwareResult____c& operator=(System__Net__ContextAwareResult____c&& o) noexcept = default;
  constexpr System__Net__ContextAwareResult____c& operator=(System__Net__ContextAwareResult____c const& o) noexcept = default;
                


// Fields

static System::Net::System__Net__ContextAwareResult____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Net::System__Net__ContextAwareResult____c value) ;

static System::Net::System__Net__ContextAwareResult____c __get___9() ;

static System::Threading::ContextCallback __declspec(property(get=__get___9__17_0, put=__set___9__17_0))  __9__17_0;

static void __set___9__17_0(System::Threading::ContextCallback value) ;

static System::Threading::ContextCallback __get___9__17_0() ;


// Methods

// Ctor Parameters []
explicit System__Net__ContextAwareResult____c() ;

/// @brief Method .ctor addr 0x27f6efc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Complete>b__17_0 addr 0x27f6f04 size 0x80 virtual false final false
 void _Complete_b__17_0(::bs_hook::Il2CppWrapperType s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::ContextAwareResult
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7958))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7871))
// CS Name: System.Net.ContextAwareResult
class CORDL_TYPE ContextAwareResult : public System::Net::LazyAsyncResult {
public:
// Declarations
using __c = System::Net::System__Net__ContextAwareResult____c;

using StateFlags = System::Net::System__Net__ContextAwareResult__StateFlags;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~ContextAwareResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextAwareResult", modifiers: " const&", def_value: None }]
constexpr ContextAwareResult(ContextAwareResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextAwareResult", modifiers: "&&", def_value: None }]
constexpr ContextAwareResult(ContextAwareResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContextAwareResult(void* ptr) noexcept : System::Net::LazyAsyncResult(ptr) {
}


  constexpr ContextAwareResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContextAwareResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContextAwareResult& operator=(ContextAwareResult&& o) noexcept = default;
  constexpr ContextAwareResult& operator=(ContextAwareResult const& o) noexcept = default;
                


// Fields

 System::Threading::ExecutionContext __declspec(property(get=__get__context, put=__set__context))  _context;

constexpr void __set__context(System::Threading::ExecutionContext value) ;

constexpr System::Threading::ExecutionContext __get__context() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__lock, put=__set__lock))  _lock;

constexpr void __set__lock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__lock() const;

 System::Net::System__Net__ContextAwareResult__StateFlags __declspec(property(get=__get__flags, put=__set__flags))  _flags;

constexpr void __set__flags(System::Net::System__Net__ContextAwareResult__StateFlags value) ;

constexpr System::Net::System__Net__ContextAwareResult__StateFlags __get__flags() const;


// Methods

/// @brief Method SafeCaptureIdentity addr 0x27f6154 size 0x4 virtual false final false
 void SafeCaptureIdentity() ;

/// @brief Method CleanupInternal addr 0x27f6158 size 0x4 virtual false final false
 void CleanupInternal() ;

// Ctor Parameters [CppParam { name: "myObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "myState", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "myCallBack", ty: "System::AsyncCallback", modifiers: "", def_value: None }]
explicit ContextAwareResult(::bs_hook::Il2CppWrapperType myObject, ::bs_hook::Il2CppWrapperType myState, System::AsyncCallback myCallBack) ;

/// @brief Method .ctor addr 0x27f615c size 0x8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType myObject, ::bs_hook::Il2CppWrapperType myState, System::AsyncCallback myCallBack) ;

// Ctor Parameters [CppParam { name: "captureIdentity", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "forceCaptureContext", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "myObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "myState", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "myCallBack", ty: "System::AsyncCallback", modifiers: "", def_value: None }]
explicit ContextAwareResult(bool captureIdentity, bool forceCaptureContext, ::bs_hook::Il2CppWrapperType myObject, ::bs_hook::Il2CppWrapperType myState, System::AsyncCallback myCallBack) ;

/// @brief Method .ctor addr 0x27f6164 size 0x50 virtual false final false
 void _ctor(bool captureIdentity, bool forceCaptureContext, ::bs_hook::Il2CppWrapperType myObject, ::bs_hook::Il2CppWrapperType myState, System::AsyncCallback myCallBack) ;

// Ctor Parameters [CppParam { name: "captureIdentity", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "forceCaptureContext", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "threadSafeContextCopy", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "myObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "myState", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "myCallBack", ty: "System::AsyncCallback", modifiers: "", def_value: None }]
explicit ContextAwareResult(bool captureIdentity, bool forceCaptureContext, bool threadSafeContextCopy, ::bs_hook::Il2CppWrapperType myObject, ::bs_hook::Il2CppWrapperType myState, System::AsyncCallback myCallBack) ;

/// @brief Method .ctor addr 0x27f61b4 size 0x78 virtual false final false
 void _ctor(bool captureIdentity, bool forceCaptureContext, bool threadSafeContextCopy, ::bs_hook::Il2CppWrapperType myObject, ::bs_hook::Il2CppWrapperType myState, System::AsyncCallback myCallBack) ;

/// @brief Method StartPostingAsyncOp addr 0x27f622c size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType StartPostingAsyncOp() ;

/// @brief Method StartPostingAsyncOp addr 0x27f6234 size 0xfc virtual false final false
 ::bs_hook::Il2CppWrapperType StartPostingAsyncOp(bool lockCapture) ;

/// @brief Method FinishPostingAsyncOp addr 0x27f6400 size 0x44 virtual false final false
 bool FinishPostingAsyncOp() ;

/// @brief Method Cleanup addr 0x27f681c size 0xa0 virtual true final false
 void Cleanup() ;

/// @brief Method CaptureOrComplete addr 0x27f6444 size 0x3d8 virtual false final false
 bool CaptureOrComplete(ByRef<System::Threading::ExecutionContext> cachedContext, bool returnContext) ;

/// @brief Method Complete addr 0x27f6ae0 size 0x2e8 virtual true final false
 void Complete(::cordl_internals::intptr_t userToken) ;

/// @brief Method CompleteCallback addr 0x27f6dc8 size 0xd0 virtual false final false
 void CompleteCallback() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__ContextAwareResult__StateFlags, "System.Net", "ContextAwareResult/StateFlags");
NEED_NO_BOX(System::Net::ContextAwareResult);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ContextAwareResult, "System.Net", "ContextAwareResult");
NEED_NO_BOX(System::Net::System__Net__ContextAwareResult____c);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__ContextAwareResult____c, "System.Net", "ContextAwareResult/<>c");

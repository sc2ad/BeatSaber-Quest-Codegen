#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__HMAutoincrementedRequestId_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class ____GlobalNamespace__HMAsyncRequest__CancelHander;
}
// Type: ::CancelHander
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13804))
// CS Name: HMAsyncRequest::CancelHander
class CORDL_TYPE ____GlobalNamespace__HMAsyncRequest__CancelHander : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____GlobalNamespace__HMAsyncRequest__CancelHander() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__HMAsyncRequest__CancelHander", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__HMAsyncRequest__CancelHander(____GlobalNamespace__HMAsyncRequest__CancelHander const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__HMAsyncRequest__CancelHander", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__HMAsyncRequest__CancelHander(____GlobalNamespace__HMAsyncRequest__CancelHander&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__HMAsyncRequest__CancelHander(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____GlobalNamespace__HMAsyncRequest__CancelHander& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__HMAsyncRequest__CancelHander& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__HMAsyncRequest__CancelHander& operator=(____GlobalNamespace__HMAsyncRequest__CancelHander&& o) noexcept = default;
  constexpr ____GlobalNamespace__HMAsyncRequest__CancelHander& operator=(____GlobalNamespace__HMAsyncRequest__CancelHander const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__HMAsyncRequest__CancelHander(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x1f78710 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x1f7883c size 0x14 virtual true final false
 void Invoke(::GlobalNamespace::HMAsyncRequest request) ;

/// @brief Method BeginInvoke addr 0x1f78850 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::GlobalNamespace::HMAsyncRequest request, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x1f78870 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HMAsyncRequest
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13806))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13805))
// CS Name: HMAsyncRequest
class CORDL_TYPE HMAsyncRequest : public ::GlobalNamespace::HMAutoincrementedRequestId {
public:
// Declarations
using CancelHander = ::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HMAsyncRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMAsyncRequest", modifiers: " const&", def_value: None }]
constexpr HMAsyncRequest(HMAsyncRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMAsyncRequest", modifiers: "&&", def_value: None }]
constexpr HMAsyncRequest(HMAsyncRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMAsyncRequest(void* ptr) noexcept : ::GlobalNamespace::HMAutoincrementedRequestId(ptr) {
}


  constexpr HMAsyncRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMAsyncRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMAsyncRequest& operator=(HMAsyncRequest&& o) noexcept = default;
  constexpr HMAsyncRequest& operator=(HMAsyncRequest const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__cancelled, put=__set__cancelled))  _cancelled;

constexpr void __set__cancelled(bool value) ;

constexpr bool __get__cancelled() const;

 ::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander __declspec(property(get=__get__cancelHander, put=__set__cancelHander))  _cancelHander;

constexpr void __set__cancelHander(::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander __get__cancelHander() const;


// Properties

 ::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander __declspec(property(get=get_CancelHandler, put=set_CancelHandler))  CancelHandler;

 bool __declspec(property(get=get_cancelled))  cancelled;


// Methods

/// @brief Method get_CancelHandler addr 0x1f78668 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander get_CancelHandler() ;

/// @brief Method set_CancelHandler addr 0x1f78670 size 0x8 virtual false final false
 void set_CancelHandler(::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander value) ;

/// @brief Method get_cancelled addr 0x1f78678 size 0x8 virtual false final false
 bool get_cancelled() ;

/// @brief Method Cancel addr 0x1f78680 size 0x28 virtual true final false
 void Cancel() ;

// Ctor Parameters []
explicit HMAsyncRequest() ;

/// @brief Method .ctor addr 0x1f786a8 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::HMAsyncRequest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HMAsyncRequest, "", "HMAsyncRequest");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander, "", "HMAsyncRequest/CancelHander");
#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
struct EVREye;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds;
}
// Forward declare root types
namespace OVR::OpenVR {
class OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds;
}
namespace OVR::OpenVR {
struct IVRExtendedDisplay;
}
// Type: ::_GetWindowBounds
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9048))
// CS Name: OVR.OpenVR.IVRExtendedDisplay::_GetWindowBounds
class CORDL_TYPE OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds(OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds(OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds& operator=(OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds& operator=(OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264644c size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2646524 size 0x14 virtual true final false
 void Invoke(ByRef<int32_t> pnX, ByRef<int32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight) ;

/// @brief Method BeginInvoke addr 0x2646538 size 0xf8 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<int32_t> pnX, ByRef<int32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2646630 size 0x28 virtual true final false
 void EndInvoke(ByRef<int32_t> pnX, ByRef<int32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetEyeOutputViewport
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9049))
// CS Name: OVR.OpenVR.IVRExtendedDisplay::_GetEyeOutputViewport
class CORDL_TYPE OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport(OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport(OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport& operator=(OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport& operator=(OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2646658 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264671c size 0x14 virtual true final false
 void Invoke(OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pnX, ByRef<uint32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight) ;

/// @brief Method BeginInvoke addr 0x2646730 size 0x110 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pnX, ByRef<uint32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2646840 size 0x28 virtual true final false
 void EndInvoke(ByRef<uint32_t> pnX, ByRef<uint32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetDXGIOutputInfo
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9050))
// CS Name: OVR.OpenVR.IVRExtendedDisplay::_GetDXGIOutputInfo
class CORDL_TYPE OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo(OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo(OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo& operator=(OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo& operator=(OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2646868 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2646940 size 0x14 virtual true final false
 void Invoke(ByRef<int32_t> pnAdapterIndex, ByRef<int32_t> pnAdapterOutputIndex) ;

/// @brief Method BeginInvoke addr 0x2646954 size 0xa4 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<int32_t> pnAdapterIndex, ByRef<int32_t> pnAdapterOutputIndex, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26469f8 size 0x24 virtual true final false
 void EndInvoke(ByRef<int32_t> pnAdapterIndex, ByRef<int32_t> pnAdapterOutputIndex, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRExtendedDisplay
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9051))
// CS Name: OVR.OpenVR.IVRExtendedDisplay
struct CORDL_TYPE IVRExtendedDisplay : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _GetDXGIOutputInfo = OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo;

using _GetEyeOutputViewport = OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport;

using _GetWindowBounds = OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds;

// Ctor Parameters [CppParam { name: "GetWindowBounds", ty: "OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds", modifiers: "", def_value: None }, CppParam { name: "GetEyeOutputViewport", ty: "OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport", modifiers: "", def_value: None }, CppParam { name: "GetDXGIOutputInfo", ty: "OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo", modifiers: "", def_value: None }]
constexpr IVRExtendedDisplay(OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds GetWindowBounds, OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport GetEyeOutputViewport, OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo GetDXGIOutputInfo) noexcept;


                    constexpr IVRExtendedDisplay(IVRExtendedDisplay const&) = default;
                    constexpr IVRExtendedDisplay(IVRExtendedDisplay&&) = default;
                    constexpr IVRExtendedDisplay& operator=(IVRExtendedDisplay const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IVRExtendedDisplay& operator=(IVRExtendedDisplay&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IVRExtendedDisplay(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds __declspec(property(get=__get_GetWindowBounds, put=__set_GetWindowBounds))  GetWindowBounds;

constexpr void __set_GetWindowBounds(OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds __get_GetWindowBounds() const;

 OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport __declspec(property(get=__get_GetEyeOutputViewport, put=__set_GetEyeOutputViewport))  GetEyeOutputViewport;

constexpr void __set_GetEyeOutputViewport(OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport __get_GetEyeOutputViewport() const;

 OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo __declspec(property(get=__get_GetDXGIOutputInfo, put=__set_GetDXGIOutputInfo))  GetDXGIOutputInfo;

constexpr void __set_GetDXGIOutputInfo(OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo __get_GetDXGIOutputInfo() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetDXGIOutputInfo, "OVR.OpenVR", "IVRExtendedDisplay/_GetDXGIOutputInfo");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetEyeOutputViewport, "OVR.OpenVR", "IVRExtendedDisplay/_GetEyeOutputViewport");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRExtendedDisplay___GetWindowBounds, "OVR.OpenVR", "IVRExtendedDisplay/_GetWindowBounds");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRExtendedDisplay, "OVR.OpenVR", "IVRExtendedDisplay");

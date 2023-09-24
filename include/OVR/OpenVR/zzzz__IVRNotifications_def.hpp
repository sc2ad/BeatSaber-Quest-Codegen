#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
struct EVRNotificationType;
}
namespace OVR::OpenVR {
struct EVRNotificationStyle;
}
namespace OVR::OpenVR {
struct NotificationBitmap_t;
}
namespace System {
class AsyncCallback;
}
namespace OVR::OpenVR {
struct EVRNotificationError;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRNotifications___CreateNotification;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRNotifications___RemoveNotification;
}
// Forward declare root types
namespace OVR::OpenVR {
class OVR__OpenVR__IVRNotifications___CreateNotification;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRNotifications___RemoveNotification;
}
namespace OVR::OpenVR {
struct IVRNotifications;
}
// Type: ::_CreateNotification
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9274))
// CS Name: OVR.OpenVR.IVRNotifications::_CreateNotification
class CORDL_TYPE OVR__OpenVR__IVRNotifications___CreateNotification : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRNotifications___CreateNotification() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRNotifications___CreateNotification", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRNotifications___CreateNotification(OVR__OpenVR__IVRNotifications___CreateNotification const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRNotifications___CreateNotification", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRNotifications___CreateNotification(OVR__OpenVR__IVRNotifications___CreateNotification&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRNotifications___CreateNotification(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRNotifications___CreateNotification& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRNotifications___CreateNotification& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRNotifications___CreateNotification& operator=(OVR__OpenVR__IVRNotifications___CreateNotification&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRNotifications___CreateNotification& operator=(OVR__OpenVR__IVRNotifications___CreateNotification const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRNotifications___CreateNotification New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265d134 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265d1f8 size 0x18 virtual true final false
 OVR::OpenVR::EVRNotificationError Invoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, OVR::OpenVR::EVRNotificationType type, ::StringW pchText, OVR::OpenVR::EVRNotificationStyle style, ByRef<OVR::OpenVR::NotificationBitmap_t> pImage, ByRef<uint32_t> pNotificationId) ;

/// @brief Method BeginInvoke addr 0x265d210 size 0x15c virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, OVR::OpenVR::EVRNotificationType type, ::StringW pchText, OVR::OpenVR::EVRNotificationStyle style, ByRef<OVR::OpenVR::NotificationBitmap_t> pImage, ByRef<uint32_t> pNotificationId, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265d36c size 0x34 virtual true final false
 OVR::OpenVR::EVRNotificationError EndInvoke(ByRef<OVR::OpenVR::NotificationBitmap_t> pImage, ByRef<uint32_t> pNotificationId, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_RemoveNotification
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9275))
// CS Name: OVR.OpenVR.IVRNotifications::_RemoveNotification
class CORDL_TYPE OVR__OpenVR__IVRNotifications___RemoveNotification : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRNotifications___RemoveNotification() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRNotifications___RemoveNotification", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRNotifications___RemoveNotification(OVR__OpenVR__IVRNotifications___RemoveNotification const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRNotifications___RemoveNotification", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRNotifications___RemoveNotification(OVR__OpenVR__IVRNotifications___RemoveNotification&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRNotifications___RemoveNotification(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRNotifications___RemoveNotification& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRNotifications___RemoveNotification& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRNotifications___RemoveNotification& operator=(OVR__OpenVR__IVRNotifications___RemoveNotification&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRNotifications___RemoveNotification& operator=(OVR__OpenVR__IVRNotifications___RemoveNotification const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRNotifications___RemoveNotification New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265d3a0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265d464 size 0x14 virtual true final false
 OVR::OpenVR::EVRNotificationError Invoke(uint32_t notificationId) ;

/// @brief Method BeginInvoke addr 0x265d478 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t notificationId, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265d4fc size 0x28 virtual true final false
 OVR::OpenVR::EVRNotificationError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRNotifications
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9276))
// CS Name: OVR.OpenVR.IVRNotifications
struct CORDL_TYPE IVRNotifications : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _RemoveNotification = OVR::OpenVR::OVR__OpenVR__IVRNotifications___RemoveNotification;

using _CreateNotification = OVR::OpenVR::OVR__OpenVR__IVRNotifications___CreateNotification;

// Ctor Parameters [CppParam { name: "CreateNotification", ty: "OVR::OpenVR::OVR__OpenVR__IVRNotifications___CreateNotification", modifiers: "", def_value: None }, CppParam { name: "RemoveNotification", ty: "OVR::OpenVR::OVR__OpenVR__IVRNotifications___RemoveNotification", modifiers: "", def_value: None }]
constexpr IVRNotifications(OVR::OpenVR::OVR__OpenVR__IVRNotifications___CreateNotification CreateNotification, OVR::OpenVR::OVR__OpenVR__IVRNotifications___RemoveNotification RemoveNotification) noexcept;


                    constexpr IVRNotifications(IVRNotifications const&) = default;
                    constexpr IVRNotifications(IVRNotifications&&) = default;
                    constexpr IVRNotifications& operator=(IVRNotifications const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IVRNotifications& operator=(IVRNotifications&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IVRNotifications(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRNotifications___CreateNotification __declspec(property(get=__get_CreateNotification, put=__set_CreateNotification))  CreateNotification;

constexpr void __set_CreateNotification(OVR::OpenVR::OVR__OpenVR__IVRNotifications___CreateNotification value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRNotifications___CreateNotification __get_CreateNotification() const;

 OVR::OpenVR::OVR__OpenVR__IVRNotifications___RemoveNotification __declspec(property(get=__get_RemoveNotification, put=__set_RemoveNotification))  RemoveNotification;

constexpr void __set_RemoveNotification(OVR::OpenVR::OVR__OpenVR__IVRNotifications___RemoveNotification value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRNotifications___RemoveNotification __get_RemoveNotification() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRNotifications___CreateNotification);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRNotifications___CreateNotification, "OVR.OpenVR", "IVRNotifications/_CreateNotification");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRNotifications___RemoveNotification);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRNotifications___RemoveNotification, "OVR.OpenVR", "IVRNotifications/_RemoveNotification");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRNotifications, "OVR.OpenVR", "IVRNotifications");

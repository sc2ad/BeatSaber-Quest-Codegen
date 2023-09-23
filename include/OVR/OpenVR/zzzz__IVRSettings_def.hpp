#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace OVR::OpenVR {
struct EVRSettingsError;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSettings___GetBool;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSettings___GetFloat;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSettings___GetInt32;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSettings___GetString;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSettings___RemoveKeyInSection;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSettings___RemoveSection;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSettings___SetBool;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSettings___SetFloat;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSettings___SetInt32;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSettings___SetString;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSettings___Sync;
}
namespace OVR::OpenVR {
struct IVRSettings;
}
// Type: ::_GetSettingsErrorNameFromEnum
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9277))
// CS Name: OVR.OpenVR.IVRSettings::_GetSettingsErrorNameFromEnum
class CORDL_TYPE OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum(OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum(OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum& operator=(OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum& operator=(OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265d524 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265d5e8 size 0x14 virtual true final false
 ::cordl_internals::intptr_t Invoke(OVR::OpenVR::EVRSettingsError eError) ;

/// @brief Method BeginInvoke addr 0x265d5fc size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EVRSettingsError eError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265d680 size 0x28 virtual true final false
 ::cordl_internals::intptr_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_Sync
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9278))
// CS Name: OVR.OpenVR.IVRSettings::_Sync
class CORDL_TYPE OVR__OpenVR__IVRSettings___Sync : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSettings___Sync() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___Sync", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___Sync(OVR__OpenVR__IVRSettings___Sync const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___Sync", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___Sync(OVR__OpenVR__IVRSettings___Sync&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSettings___Sync(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSettings___Sync& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___Sync& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___Sync& operator=(OVR__OpenVR__IVRSettings___Sync&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSettings___Sync& operator=(OVR__OpenVR__IVRSettings___Sync const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRSettings___Sync(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265d6a8 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265d76c size 0x18 virtual true final false
 bool Invoke(bool bForce, ByRef<OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method BeginInvoke addr 0x265d784 size 0xbc virtual true final false
 System::IAsyncResult BeginInvoke(bool bForce, ByRef<OVR::OpenVR::EVRSettingsError> peError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265d840 size 0x2c virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::EVRSettingsError> peError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetBool
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9279))
// CS Name: OVR.OpenVR.IVRSettings::_SetBool
class CORDL_TYPE OVR__OpenVR__IVRSettings___SetBool : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSettings___SetBool() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___SetBool", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___SetBool(OVR__OpenVR__IVRSettings___SetBool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___SetBool", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___SetBool(OVR__OpenVR__IVRSettings___SetBool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSettings___SetBool(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSettings___SetBool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___SetBool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___SetBool& operator=(OVR__OpenVR__IVRSettings___SetBool&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSettings___SetBool& operator=(OVR__OpenVR__IVRSettings___SetBool const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRSettings___SetBool(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265d86c size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265d944 size 0x18 virtual true final false
 void Invoke(::StringW pchSection, ::StringW pchSettingsKey, bool bValue, ByRef<OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method BeginInvoke addr 0x265d95c size 0xd0 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, bool bValue, ByRef<OVR::OpenVR::EVRSettingsError> peError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265da2c size 0x1c virtual true final false
 void EndInvoke(ByRef<OVR::OpenVR::EVRSettingsError> peError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetInt32
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9280))
// CS Name: OVR.OpenVR.IVRSettings::_SetInt32
class CORDL_TYPE OVR__OpenVR__IVRSettings___SetInt32 : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSettings___SetInt32() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___SetInt32", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___SetInt32(OVR__OpenVR__IVRSettings___SetInt32 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___SetInt32", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___SetInt32(OVR__OpenVR__IVRSettings___SetInt32&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSettings___SetInt32(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSettings___SetInt32& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___SetInt32& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___SetInt32& operator=(OVR__OpenVR__IVRSettings___SetInt32&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSettings___SetInt32& operator=(OVR__OpenVR__IVRSettings___SetInt32 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRSettings___SetInt32(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265da48 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265db20 size 0x14 virtual true final false
 void Invoke(::StringW pchSection, ::StringW pchSettingsKey, int32_t nValue, ByRef<OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method BeginInvoke addr 0x265db34 size 0xcc virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, int32_t nValue, ByRef<OVR::OpenVR::EVRSettingsError> peError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265dc00 size 0x1c virtual true final false
 void EndInvoke(ByRef<OVR::OpenVR::EVRSettingsError> peError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetFloat
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9281))
// CS Name: OVR.OpenVR.IVRSettings::_SetFloat
class CORDL_TYPE OVR__OpenVR__IVRSettings___SetFloat : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSettings___SetFloat() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___SetFloat", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___SetFloat(OVR__OpenVR__IVRSettings___SetFloat const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___SetFloat", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___SetFloat(OVR__OpenVR__IVRSettings___SetFloat&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSettings___SetFloat(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSettings___SetFloat& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___SetFloat& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___SetFloat& operator=(OVR__OpenVR__IVRSettings___SetFloat&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSettings___SetFloat& operator=(OVR__OpenVR__IVRSettings___SetFloat const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRSettings___SetFloat(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265dc1c size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265dcf4 size 0x14 virtual true final false
 void Invoke(::StringW pchSection, ::StringW pchSettingsKey, float_t flValue, ByRef<OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method BeginInvoke addr 0x265dd08 size 0xcc virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, float_t flValue, ByRef<OVR::OpenVR::EVRSettingsError> peError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265ddd4 size 0x1c virtual true final false
 void EndInvoke(ByRef<OVR::OpenVR::EVRSettingsError> peError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetString
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9282))
// CS Name: OVR.OpenVR.IVRSettings::_SetString
class CORDL_TYPE OVR__OpenVR__IVRSettings___SetString : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSettings___SetString() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___SetString", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___SetString(OVR__OpenVR__IVRSettings___SetString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___SetString", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___SetString(OVR__OpenVR__IVRSettings___SetString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSettings___SetString(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSettings___SetString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___SetString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___SetString& operator=(OVR__OpenVR__IVRSettings___SetString&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSettings___SetString& operator=(OVR__OpenVR__IVRSettings___SetString const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRSettings___SetString(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265ddf0 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265dec8 size 0x14 virtual true final false
 void Invoke(::StringW pchSection, ::StringW pchSettingsKey, ::StringW pchValue, ByRef<OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method BeginInvoke addr 0x265dedc size 0xa8 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ::StringW pchValue, ByRef<OVR::OpenVR::EVRSettingsError> peError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265df84 size 0x1c virtual true final false
 void EndInvoke(ByRef<OVR::OpenVR::EVRSettingsError> peError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetBool
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9283))
// CS Name: OVR.OpenVR.IVRSettings::_GetBool
class CORDL_TYPE OVR__OpenVR__IVRSettings___GetBool : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSettings___GetBool() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___GetBool", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___GetBool(OVR__OpenVR__IVRSettings___GetBool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___GetBool", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___GetBool(OVR__OpenVR__IVRSettings___GetBool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSettings___GetBool(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSettings___GetBool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___GetBool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___GetBool& operator=(OVR__OpenVR__IVRSettings___GetBool&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSettings___GetBool& operator=(OVR__OpenVR__IVRSettings___GetBool const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRSettings___GetBool(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265dfa0 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265e078 size 0x14 virtual true final false
 bool Invoke(::StringW pchSection, ::StringW pchSettingsKey, ByRef<OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method BeginInvoke addr 0x265e08c size 0xa0 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ByRef<OVR::OpenVR::EVRSettingsError> peError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265e12c size 0x2c virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::EVRSettingsError> peError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetInt32
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9284))
// CS Name: OVR.OpenVR.IVRSettings::_GetInt32
class CORDL_TYPE OVR__OpenVR__IVRSettings___GetInt32 : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSettings___GetInt32() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___GetInt32", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___GetInt32(OVR__OpenVR__IVRSettings___GetInt32 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___GetInt32", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___GetInt32(OVR__OpenVR__IVRSettings___GetInt32&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSettings___GetInt32(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSettings___GetInt32& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___GetInt32& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___GetInt32& operator=(OVR__OpenVR__IVRSettings___GetInt32&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSettings___GetInt32& operator=(OVR__OpenVR__IVRSettings___GetInt32 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRSettings___GetInt32(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265e158 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265e230 size 0x14 virtual true final false
 int32_t Invoke(::StringW pchSection, ::StringW pchSettingsKey, ByRef<OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method BeginInvoke addr 0x265e244 size 0xa0 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ByRef<OVR::OpenVR::EVRSettingsError> peError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265e2e4 size 0x2c virtual true final false
 int32_t EndInvoke(ByRef<OVR::OpenVR::EVRSettingsError> peError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetFloat
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9285))
// CS Name: OVR.OpenVR.IVRSettings::_GetFloat
class CORDL_TYPE OVR__OpenVR__IVRSettings___GetFloat : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSettings___GetFloat() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___GetFloat", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___GetFloat(OVR__OpenVR__IVRSettings___GetFloat const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___GetFloat", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___GetFloat(OVR__OpenVR__IVRSettings___GetFloat&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSettings___GetFloat(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSettings___GetFloat& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___GetFloat& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___GetFloat& operator=(OVR__OpenVR__IVRSettings___GetFloat&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSettings___GetFloat& operator=(OVR__OpenVR__IVRSettings___GetFloat const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRSettings___GetFloat(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265e310 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265e3e8 size 0x14 virtual true final false
 float_t Invoke(::StringW pchSection, ::StringW pchSettingsKey, ByRef<OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method BeginInvoke addr 0x265e3fc size 0xa0 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ByRef<OVR::OpenVR::EVRSettingsError> peError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265e49c size 0x2c virtual true final false
 float_t EndInvoke(ByRef<OVR::OpenVR::EVRSettingsError> peError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetString
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9286))
// CS Name: OVR.OpenVR.IVRSettings::_GetString
class CORDL_TYPE OVR__OpenVR__IVRSettings___GetString : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSettings___GetString() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___GetString", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___GetString(OVR__OpenVR__IVRSettings___GetString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___GetString", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___GetString(OVR__OpenVR__IVRSettings___GetString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSettings___GetString(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSettings___GetString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___GetString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___GetString& operator=(OVR__OpenVR__IVRSettings___GetString&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSettings___GetString& operator=(OVR__OpenVR__IVRSettings___GetString const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRSettings___GetString(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265e4c8 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265e5a0 size 0x14 virtual true final false
 void Invoke(::StringW pchSection, ::StringW pchSettingsKey, System::Text::StringBuilder pchValue, uint32_t unValueLen, ByRef<OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method BeginInvoke addr 0x265e5b4 size 0xdc virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, System::Text::StringBuilder pchValue, uint32_t unValueLen, ByRef<OVR::OpenVR::EVRSettingsError> peError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265e690 size 0x1c virtual true final false
 void EndInvoke(ByRef<OVR::OpenVR::EVRSettingsError> peError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_RemoveSection
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9287))
// CS Name: OVR.OpenVR.IVRSettings::_RemoveSection
class CORDL_TYPE OVR__OpenVR__IVRSettings___RemoveSection : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSettings___RemoveSection() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___RemoveSection", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___RemoveSection(OVR__OpenVR__IVRSettings___RemoveSection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___RemoveSection", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___RemoveSection(OVR__OpenVR__IVRSettings___RemoveSection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSettings___RemoveSection(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSettings___RemoveSection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___RemoveSection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___RemoveSection& operator=(OVR__OpenVR__IVRSettings___RemoveSection&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSettings___RemoveSection& operator=(OVR__OpenVR__IVRSettings___RemoveSection const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRSettings___RemoveSection(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265e6ac size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265e784 size 0x14 virtual true final false
 void Invoke(::StringW pchSection, ByRef<OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method BeginInvoke addr 0x265e798 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchSection, ByRef<OVR::OpenVR::EVRSettingsError> peError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265e82c size 0x1c virtual true final false
 void EndInvoke(ByRef<OVR::OpenVR::EVRSettingsError> peError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_RemoveKeyInSection
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9288))
// CS Name: OVR.OpenVR.IVRSettings::_RemoveKeyInSection
class CORDL_TYPE OVR__OpenVR__IVRSettings___RemoveKeyInSection : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRSettings___RemoveKeyInSection() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___RemoveKeyInSection", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___RemoveKeyInSection(OVR__OpenVR__IVRSettings___RemoveKeyInSection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRSettings___RemoveKeyInSection", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRSettings___RemoveKeyInSection(OVR__OpenVR__IVRSettings___RemoveKeyInSection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRSettings___RemoveKeyInSection(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRSettings___RemoveKeyInSection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___RemoveKeyInSection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRSettings___RemoveKeyInSection& operator=(OVR__OpenVR__IVRSettings___RemoveKeyInSection&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRSettings___RemoveKeyInSection& operator=(OVR__OpenVR__IVRSettings___RemoveKeyInSection const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRSettings___RemoveKeyInSection(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265e848 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265e920 size 0x14 virtual true final false
 void Invoke(::StringW pchSection, ::StringW pchSettingsKey, ByRef<OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method BeginInvoke addr 0x265e934 size 0xa0 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ByRef<OVR::OpenVR::EVRSettingsError> peError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265e9d4 size 0x1c virtual true final false
 void EndInvoke(ByRef<OVR::OpenVR::EVRSettingsError> peError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRSettings
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9289))
// CS Name: OVR.OpenVR.IVRSettings
struct CORDL_TYPE IVRSettings : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _RemoveKeyInSection = OVR::OpenVR::OVR__OpenVR__IVRSettings___RemoveKeyInSection;

using _RemoveSection = OVR::OpenVR::OVR__OpenVR__IVRSettings___RemoveSection;

using _GetString = OVR::OpenVR::OVR__OpenVR__IVRSettings___GetString;

using _GetFloat = OVR::OpenVR::OVR__OpenVR__IVRSettings___GetFloat;

using _GetInt32 = OVR::OpenVR::OVR__OpenVR__IVRSettings___GetInt32;

using _GetBool = OVR::OpenVR::OVR__OpenVR__IVRSettings___GetBool;

using _SetString = OVR::OpenVR::OVR__OpenVR__IVRSettings___SetString;

using _SetFloat = OVR::OpenVR::OVR__OpenVR__IVRSettings___SetFloat;

using _SetInt32 = OVR::OpenVR::OVR__OpenVR__IVRSettings___SetInt32;

using _SetBool = OVR::OpenVR::OVR__OpenVR__IVRSettings___SetBool;

using _Sync = OVR::OpenVR::OVR__OpenVR__IVRSettings___Sync;

using _GetSettingsErrorNameFromEnum = OVR::OpenVR::OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum;

// Ctor Parameters [CppParam { name: "GetSettingsErrorNameFromEnum", ty: "OVR::OpenVR::OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum", modifiers: "", def_value: None }, CppParam { name: "Sync", ty: "OVR::OpenVR::OVR__OpenVR__IVRSettings___Sync", modifiers: "", def_value: None }, CppParam { name: "SetBool", ty: "OVR::OpenVR::OVR__OpenVR__IVRSettings___SetBool", modifiers: "", def_value: None }, CppParam { name: "SetInt32", ty: "OVR::OpenVR::OVR__OpenVR__IVRSettings___SetInt32", modifiers: "", def_value: None }, CppParam { name: "SetFloat", ty: "OVR::OpenVR::OVR__OpenVR__IVRSettings___SetFloat", modifiers: "", def_value: None }, CppParam { name: "SetString", ty: "OVR::OpenVR::OVR__OpenVR__IVRSettings___SetString", modifiers: "", def_value: None }, CppParam { name: "GetBool", ty: "OVR::OpenVR::OVR__OpenVR__IVRSettings___GetBool", modifiers: "", def_value: None }, CppParam { name: "GetInt32", ty: "OVR::OpenVR::OVR__OpenVR__IVRSettings___GetInt32", modifiers: "", def_value: None }, CppParam { name: "GetFloat", ty: "OVR::OpenVR::OVR__OpenVR__IVRSettings___GetFloat", modifiers: "", def_value: None }, CppParam { name: "GetString", ty: "OVR::OpenVR::OVR__OpenVR__IVRSettings___GetString", modifiers: "", def_value: None }, CppParam { name: "RemoveSection", ty: "OVR::OpenVR::OVR__OpenVR__IVRSettings___RemoveSection", modifiers: "", def_value: None }, CppParam { name: "RemoveKeyInSection", ty: "OVR::OpenVR::OVR__OpenVR__IVRSettings___RemoveKeyInSection", modifiers: "", def_value: None }]
constexpr IVRSettings(OVR::OpenVR::OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum GetSettingsErrorNameFromEnum, OVR::OpenVR::OVR__OpenVR__IVRSettings___Sync Sync, OVR::OpenVR::OVR__OpenVR__IVRSettings___SetBool SetBool, OVR::OpenVR::OVR__OpenVR__IVRSettings___SetInt32 SetInt32, OVR::OpenVR::OVR__OpenVR__IVRSettings___SetFloat SetFloat, OVR::OpenVR::OVR__OpenVR__IVRSettings___SetString SetString, OVR::OpenVR::OVR__OpenVR__IVRSettings___GetBool GetBool, OVR::OpenVR::OVR__OpenVR__IVRSettings___GetInt32 GetInt32, OVR::OpenVR::OVR__OpenVR__IVRSettings___GetFloat GetFloat, OVR::OpenVR::OVR__OpenVR__IVRSettings___GetString GetString, OVR::OpenVR::OVR__OpenVR__IVRSettings___RemoveSection RemoveSection, OVR::OpenVR::OVR__OpenVR__IVRSettings___RemoveKeyInSection RemoveKeyInSection) noexcept;


                    constexpr IVRSettings(IVRSettings const&) = default;
                    constexpr IVRSettings(IVRSettings&&) = default;
                    constexpr IVRSettings& operator=(IVRSettings const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IVRSettings& operator=(IVRSettings&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IVRSettings(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum __declspec(property(get=__get_GetSettingsErrorNameFromEnum, put=__set_GetSettingsErrorNameFromEnum))  GetSettingsErrorNameFromEnum;

constexpr void __set_GetSettingsErrorNameFromEnum(OVR::OpenVR::OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum __get_GetSettingsErrorNameFromEnum() const;

 OVR::OpenVR::OVR__OpenVR__IVRSettings___Sync __declspec(property(get=__get_Sync, put=__set_Sync))  Sync;

constexpr void __set_Sync(OVR::OpenVR::OVR__OpenVR__IVRSettings___Sync value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSettings___Sync __get_Sync() const;

 OVR::OpenVR::OVR__OpenVR__IVRSettings___SetBool __declspec(property(get=__get_SetBool, put=__set_SetBool))  SetBool;

constexpr void __set_SetBool(OVR::OpenVR::OVR__OpenVR__IVRSettings___SetBool value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSettings___SetBool __get_SetBool() const;

 OVR::OpenVR::OVR__OpenVR__IVRSettings___SetInt32 __declspec(property(get=__get_SetInt32, put=__set_SetInt32))  SetInt32;

constexpr void __set_SetInt32(OVR::OpenVR::OVR__OpenVR__IVRSettings___SetInt32 value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSettings___SetInt32 __get_SetInt32() const;

 OVR::OpenVR::OVR__OpenVR__IVRSettings___SetFloat __declspec(property(get=__get_SetFloat, put=__set_SetFloat))  SetFloat;

constexpr void __set_SetFloat(OVR::OpenVR::OVR__OpenVR__IVRSettings___SetFloat value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSettings___SetFloat __get_SetFloat() const;

 OVR::OpenVR::OVR__OpenVR__IVRSettings___SetString __declspec(property(get=__get_SetString, put=__set_SetString))  SetString;

constexpr void __set_SetString(OVR::OpenVR::OVR__OpenVR__IVRSettings___SetString value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSettings___SetString __get_SetString() const;

 OVR::OpenVR::OVR__OpenVR__IVRSettings___GetBool __declspec(property(get=__get_GetBool, put=__set_GetBool))  GetBool;

constexpr void __set_GetBool(OVR::OpenVR::OVR__OpenVR__IVRSettings___GetBool value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSettings___GetBool __get_GetBool() const;

 OVR::OpenVR::OVR__OpenVR__IVRSettings___GetInt32 __declspec(property(get=__get_GetInt32, put=__set_GetInt32))  GetInt32;

constexpr void __set_GetInt32(OVR::OpenVR::OVR__OpenVR__IVRSettings___GetInt32 value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSettings___GetInt32 __get_GetInt32() const;

 OVR::OpenVR::OVR__OpenVR__IVRSettings___GetFloat __declspec(property(get=__get_GetFloat, put=__set_GetFloat))  GetFloat;

constexpr void __set_GetFloat(OVR::OpenVR::OVR__OpenVR__IVRSettings___GetFloat value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSettings___GetFloat __get_GetFloat() const;

 OVR::OpenVR::OVR__OpenVR__IVRSettings___GetString __declspec(property(get=__get_GetString, put=__set_GetString))  GetString;

constexpr void __set_GetString(OVR::OpenVR::OVR__OpenVR__IVRSettings___GetString value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSettings___GetString __get_GetString() const;

 OVR::OpenVR::OVR__OpenVR__IVRSettings___RemoveSection __declspec(property(get=__get_RemoveSection, put=__set_RemoveSection))  RemoveSection;

constexpr void __set_RemoveSection(OVR::OpenVR::OVR__OpenVR__IVRSettings___RemoveSection value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSettings___RemoveSection __get_RemoveSection() const;

 OVR::OpenVR::OVR__OpenVR__IVRSettings___RemoveKeyInSection __declspec(property(get=__get_RemoveKeyInSection, put=__set_RemoveKeyInSection))  RemoveKeyInSection;

constexpr void __set_RemoveKeyInSection(OVR::OpenVR::OVR__OpenVR__IVRSettings___RemoveKeyInSection value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSettings___RemoveKeyInSection __get_RemoveKeyInSection() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSettings___GetBool);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSettings___GetBool, "OVR.OpenVR", "IVRSettings/_GetBool");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSettings___GetFloat);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSettings___GetFloat, "OVR.OpenVR", "IVRSettings/_GetFloat");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSettings___GetInt32);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSettings___GetInt32, "OVR.OpenVR", "IVRSettings/_GetInt32");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSettings___GetSettingsErrorNameFromEnum, "OVR.OpenVR", "IVRSettings/_GetSettingsErrorNameFromEnum");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSettings___GetString);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSettings___GetString, "OVR.OpenVR", "IVRSettings/_GetString");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSettings___RemoveKeyInSection);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSettings___RemoveKeyInSection, "OVR.OpenVR", "IVRSettings/_RemoveKeyInSection");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSettings___RemoveSection);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSettings___RemoveSection, "OVR.OpenVR", "IVRSettings/_RemoveSection");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSettings___SetBool);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSettings___SetBool, "OVR.OpenVR", "IVRSettings/_SetBool");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSettings___SetFloat);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSettings___SetFloat, "OVR.OpenVR", "IVRSettings/_SetFloat");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSettings___SetInt32);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSettings___SetInt32, "OVR.OpenVR", "IVRSettings/_SetInt32");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSettings___SetString);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSettings___SetString, "OVR.OpenVR", "IVRSettings/_SetString");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRSettings___Sync);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRSettings___Sync, "OVR.OpenVR", "IVRSettings/_Sync");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSettings, "OVR.OpenVR", "IVRSettings");

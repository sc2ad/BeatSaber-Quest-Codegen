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
struct EIOBufferError;
}
namespace System {
class AsyncCallback;
}
namespace OVR::OpenVR {
struct EIOBufferMode;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRIOBuffer___Close;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRIOBuffer___Open;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRIOBuffer___PropertyContainer;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRIOBuffer___Read;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRIOBuffer___Write;
}
// Forward declare root types
namespace OVR::OpenVR {
class OVR__OpenVR__IVRIOBuffer___Close;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRIOBuffer___Open;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRIOBuffer___PropertyContainer;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRIOBuffer___Read;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRIOBuffer___Write;
}
namespace OVR::OpenVR {
struct IVRIOBuffer;
}
// Type: ::_Open
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9324))
// CS Name: OVR.OpenVR.IVRIOBuffer::_Open
class CORDL_TYPE OVR__OpenVR__IVRIOBuffer___Open : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRIOBuffer___Open() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRIOBuffer___Open", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRIOBuffer___Open(OVR__OpenVR__IVRIOBuffer___Open const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRIOBuffer___Open", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRIOBuffer___Open(OVR__OpenVR__IVRIOBuffer___Open&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRIOBuffer___Open(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRIOBuffer___Open& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRIOBuffer___Open& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRIOBuffer___Open& operator=(OVR__OpenVR__IVRIOBuffer___Open&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRIOBuffer___Open& operator=(OVR__OpenVR__IVRIOBuffer___Open const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Open New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2661fe0 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26620b8 size 0x14 virtual true final false
 OVR::OpenVR::EIOBufferError Invoke(::StringW pchPath, OVR::OpenVR::EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, ByRef<uint64_t> pulBuffer) ;

/// @brief Method BeginInvoke addr 0x26620cc size 0x108 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchPath, OVR::OpenVR::EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, ByRef<uint64_t> pulBuffer, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26621d4 size 0x2c virtual true final false
 OVR::OpenVR::EIOBufferError EndInvoke(ByRef<uint64_t> pulBuffer, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_Close
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9325))
// CS Name: OVR.OpenVR.IVRIOBuffer::_Close
class CORDL_TYPE OVR__OpenVR__IVRIOBuffer___Close : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRIOBuffer___Close() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRIOBuffer___Close", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRIOBuffer___Close(OVR__OpenVR__IVRIOBuffer___Close const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRIOBuffer___Close", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRIOBuffer___Close(OVR__OpenVR__IVRIOBuffer___Close&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRIOBuffer___Close(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRIOBuffer___Close& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRIOBuffer___Close& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRIOBuffer___Close& operator=(OVR__OpenVR__IVRIOBuffer___Close&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRIOBuffer___Close& operator=(OVR__OpenVR__IVRIOBuffer___Close const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Close New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2662200 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26622c4 size 0x14 virtual true final false
 OVR::OpenVR::EIOBufferError Invoke(uint64_t ulBuffer) ;

/// @brief Method BeginInvoke addr 0x26622d8 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulBuffer, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x266235c size 0x28 virtual true final false
 OVR::OpenVR::EIOBufferError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_Read
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9326))
// CS Name: OVR.OpenVR.IVRIOBuffer::_Read
class CORDL_TYPE OVR__OpenVR__IVRIOBuffer___Read : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRIOBuffer___Read() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRIOBuffer___Read", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRIOBuffer___Read(OVR__OpenVR__IVRIOBuffer___Read const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRIOBuffer___Read", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRIOBuffer___Read(OVR__OpenVR__IVRIOBuffer___Read&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRIOBuffer___Read(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRIOBuffer___Read& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRIOBuffer___Read& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRIOBuffer___Read& operator=(OVR__OpenVR__IVRIOBuffer___Read&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRIOBuffer___Read& operator=(OVR__OpenVR__IVRIOBuffer___Read const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Read New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2662384 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2662448 size 0x14 virtual true final false
 OVR::OpenVR::EIOBufferError Invoke(uint64_t ulBuffer, ::cordl_internals::intptr_t pDst, uint32_t unBytes, ByRef<uint32_t> punRead) ;

/// @brief Method BeginInvoke addr 0x266245c size 0x100 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulBuffer, ::cordl_internals::intptr_t pDst, uint32_t unBytes, ByRef<uint32_t> punRead, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x266255c size 0x2c virtual true final false
 OVR::OpenVR::EIOBufferError EndInvoke(ByRef<uint32_t> punRead, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_Write
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9327))
// CS Name: OVR.OpenVR.IVRIOBuffer::_Write
class CORDL_TYPE OVR__OpenVR__IVRIOBuffer___Write : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRIOBuffer___Write() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRIOBuffer___Write", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRIOBuffer___Write(OVR__OpenVR__IVRIOBuffer___Write const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRIOBuffer___Write", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRIOBuffer___Write(OVR__OpenVR__IVRIOBuffer___Write&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRIOBuffer___Write(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRIOBuffer___Write& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRIOBuffer___Write& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRIOBuffer___Write& operator=(OVR__OpenVR__IVRIOBuffer___Write&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRIOBuffer___Write& operator=(OVR__OpenVR__IVRIOBuffer___Write const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Write New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2662588 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x266264c size 0x14 virtual true final false
 OVR::OpenVR::EIOBufferError Invoke(uint64_t ulBuffer, ::cordl_internals::intptr_t pSrc, uint32_t unBytes) ;

/// @brief Method BeginInvoke addr 0x2662660 size 0xe0 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulBuffer, ::cordl_internals::intptr_t pSrc, uint32_t unBytes, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2662740 size 0x28 virtual true final false
 OVR::OpenVR::EIOBufferError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_PropertyContainer
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9328))
// CS Name: OVR.OpenVR.IVRIOBuffer::_PropertyContainer
class CORDL_TYPE OVR__OpenVR__IVRIOBuffer___PropertyContainer : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRIOBuffer___PropertyContainer() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRIOBuffer___PropertyContainer", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRIOBuffer___PropertyContainer(OVR__OpenVR__IVRIOBuffer___PropertyContainer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRIOBuffer___PropertyContainer", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRIOBuffer___PropertyContainer(OVR__OpenVR__IVRIOBuffer___PropertyContainer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRIOBuffer___PropertyContainer(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRIOBuffer___PropertyContainer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRIOBuffer___PropertyContainer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRIOBuffer___PropertyContainer& operator=(OVR__OpenVR__IVRIOBuffer___PropertyContainer&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRIOBuffer___PropertyContainer& operator=(OVR__OpenVR__IVRIOBuffer___PropertyContainer const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___PropertyContainer New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2662768 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x266282c size 0x14 virtual true final false
 uint64_t Invoke(uint64_t ulBuffer) ;

/// @brief Method BeginInvoke addr 0x2662840 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t ulBuffer, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26628c4 size 0x28 virtual true final false
 uint64_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRIOBuffer
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9329))
// CS Name: OVR.OpenVR.IVRIOBuffer
struct CORDL_TYPE IVRIOBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _PropertyContainer = OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___PropertyContainer;

using _Write = OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Write;

using _Read = OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Read;

using _Close = OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Close;

using _Open = OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Open;

// Ctor Parameters [CppParam { name: "Open", ty: "OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Open", modifiers: "", def_value: None }, CppParam { name: "Close", ty: "OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Close", modifiers: "", def_value: None }, CppParam { name: "Read", ty: "OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Read", modifiers: "", def_value: None }, CppParam { name: "Write", ty: "OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Write", modifiers: "", def_value: None }, CppParam { name: "PropertyContainer", ty: "OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___PropertyContainer", modifiers: "", def_value: None }]
constexpr IVRIOBuffer(OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Open Open, OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Close Close, OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Read Read, OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Write Write, OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___PropertyContainer PropertyContainer) noexcept;


                    constexpr IVRIOBuffer(IVRIOBuffer const&) = default;
                    constexpr IVRIOBuffer(IVRIOBuffer&&) = default;
                    constexpr IVRIOBuffer& operator=(IVRIOBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IVRIOBuffer& operator=(IVRIOBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IVRIOBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Open __declspec(property(get=__get_Open, put=__set_Open))  Open;

constexpr void __set_Open(OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Open value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Open __get_Open() const;

 OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Close __declspec(property(get=__get_Close, put=__set_Close))  Close;

constexpr void __set_Close(OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Close value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Close __get_Close() const;

 OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Read __declspec(property(get=__get_Read, put=__set_Read))  Read;

constexpr void __set_Read(OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Read value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Read __get_Read() const;

 OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Write __declspec(property(get=__get_Write, put=__set_Write))  Write;

constexpr void __set_Write(OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Write value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Write __get_Write() const;

 OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___PropertyContainer __declspec(property(get=__get_PropertyContainer, put=__set_PropertyContainer))  PropertyContainer;

constexpr void __set_PropertyContainer(OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___PropertyContainer value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___PropertyContainer __get_PropertyContainer() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Close);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Close, "OVR.OpenVR", "IVRIOBuffer/_Close");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Open);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Open, "OVR.OpenVR", "IVRIOBuffer/_Open");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___PropertyContainer);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___PropertyContainer, "OVR.OpenVR", "IVRIOBuffer/_PropertyContainer");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Read);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Read, "OVR.OpenVR", "IVRIOBuffer/_Read");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Write);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRIOBuffer___Write, "OVR.OpenVR", "IVRIOBuffer/_Write");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRIOBuffer, "OVR.OpenVR", "IVRIOBuffer");

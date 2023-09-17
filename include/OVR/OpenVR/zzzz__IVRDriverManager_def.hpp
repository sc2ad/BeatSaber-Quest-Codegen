#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRDriverManager___GetDriverCount;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRDriverManager___GetDriverHandle;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRDriverManager___GetDriverName;
}
namespace OVR::OpenVR {
struct IVRDriverManager;
}
// Type: ::_GetDriverCount
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9301))
// CS Name: OVR.OpenVR.IVRDriverManager::_GetDriverCount
class CORDL_TYPE ____OVR__OpenVR__IVRDriverManager___GetDriverCount : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRDriverManager___GetDriverCount() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRDriverManager___GetDriverCount", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverCount(____OVR__OpenVR__IVRDriverManager___GetDriverCount const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRDriverManager___GetDriverCount", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverCount(____OVR__OpenVR__IVRDriverManager___GetDriverCount&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRDriverManager___GetDriverCount(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverCount& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverCount& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverCount& operator=(____OVR__OpenVR__IVRDriverManager___GetDriverCount&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverCount& operator=(____OVR__OpenVR__IVRDriverManager___GetDriverCount const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRDriverManager___GetDriverCount(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265f9e0 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265fa9c size 0x14 virtual true final false
 uint32_t Invoke() ;

/// @brief Method BeginInvoke addr 0x265fab0 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265fad0 size 0x28 virtual true final false
 uint32_t EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetDriverName
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9302))
// CS Name: OVR.OpenVR.IVRDriverManager::_GetDriverName
class CORDL_TYPE ____OVR__OpenVR__IVRDriverManager___GetDriverName : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRDriverManager___GetDriverName() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRDriverManager___GetDriverName", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverName(____OVR__OpenVR__IVRDriverManager___GetDriverName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRDriverManager___GetDriverName", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverName(____OVR__OpenVR__IVRDriverManager___GetDriverName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRDriverManager___GetDriverName(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverName& operator=(____OVR__OpenVR__IVRDriverManager___GetDriverName&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverName& operator=(____OVR__OpenVR__IVRDriverManager___GetDriverName const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRDriverManager___GetDriverName(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265faf8 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265fbbc size 0x14 virtual true final false
 uint32_t Invoke(uint32_t nDriver, ::System::Text::StringBuilder pchValue, uint32_t unBufferSize) ;

/// @brief Method BeginInvoke addr 0x265fbd0 size 0xa4 virtual true final false
 ::System::IAsyncResult BeginInvoke(uint32_t nDriver, ::System::Text::StringBuilder pchValue, uint32_t unBufferSize, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265fc74 size 0x28 virtual true final false
 uint32_t EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetDriverHandle
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9303))
// CS Name: OVR.OpenVR.IVRDriverManager::_GetDriverHandle
class CORDL_TYPE ____OVR__OpenVR__IVRDriverManager___GetDriverHandle : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRDriverManager___GetDriverHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRDriverManager___GetDriverHandle", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverHandle(____OVR__OpenVR__IVRDriverManager___GetDriverHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRDriverManager___GetDriverHandle", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverHandle(____OVR__OpenVR__IVRDriverManager___GetDriverHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRDriverManager___GetDriverHandle(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverHandle& operator=(____OVR__OpenVR__IVRDriverManager___GetDriverHandle&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRDriverManager___GetDriverHandle& operator=(____OVR__OpenVR__IVRDriverManager___GetDriverHandle const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRDriverManager___GetDriverHandle(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265fc9c size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265fd70 size 0x14 virtual true final false
 uint64_t Invoke(::StringW pchDriverName) ;

/// @brief Method BeginInvoke addr 0x265fd84 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::StringW pchDriverName, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265fda4 size 0x28 virtual true final false
 uint64_t EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRDriverManager
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9304))
// CS Name: OVR.OpenVR.IVRDriverManager
struct CORDL_TYPE IVRDriverManager : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _GetDriverHandle = ::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverHandle;

using _GetDriverName = ::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverName;

using _GetDriverCount = ::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverCount;

// Ctor Parameters [CppParam { name: "GetDriverCount", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverCount", modifiers: "", def_value: None }, CppParam { name: "GetDriverName", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverName", modifiers: "", def_value: None }, CppParam { name: "GetDriverHandle", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverHandle", modifiers: "", def_value: None }]
constexpr IVRDriverManager(::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverCount GetDriverCount, ::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverName GetDriverName, ::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverHandle GetDriverHandle) noexcept;


                    constexpr IVRDriverManager(IVRDriverManager const&) = default;
                    constexpr IVRDriverManager(IVRDriverManager&&) = default;
                    constexpr IVRDriverManager& operator=(IVRDriverManager const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IVRDriverManager& operator=(IVRDriverManager&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IVRDriverManager(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverCount __declspec(property(get=__get_GetDriverCount, put=__set_GetDriverCount))  GetDriverCount;

constexpr void __set_GetDriverCount(::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverCount value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverCount __get_GetDriverCount() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverName __declspec(property(get=__get_GetDriverName, put=__set_GetDriverName))  GetDriverName;

constexpr void __set_GetDriverName(::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverName value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverName __get_GetDriverName() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverHandle __declspec(property(get=__get_GetDriverHandle, put=__set_GetDriverHandle))  GetDriverHandle;

constexpr void __set_GetDriverHandle(::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverHandle value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverHandle __get_GetDriverHandle() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverCount);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverCount, "OVR.OpenVR", "IVRDriverManager/_GetDriverCount");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverHandle);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverHandle, "OVR.OpenVR", "IVRDriverManager/_GetDriverHandle");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverName);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRDriverManager___GetDriverName, "OVR.OpenVR", "IVRDriverManager/_GetDriverName");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRDriverManager, "OVR.OpenVR", "IVRDriverManager");

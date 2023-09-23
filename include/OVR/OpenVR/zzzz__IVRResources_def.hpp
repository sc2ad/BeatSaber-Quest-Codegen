#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
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
class OVR__OpenVR__IVRResources___GetResourceFullPath;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRResources___LoadSharedResource;
}
namespace OVR::OpenVR {
struct IVRResources;
}
// Type: ::_LoadSharedResource
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9298))
// CS Name: OVR.OpenVR.IVRResources::_LoadSharedResource
class CORDL_TYPE OVR__OpenVR__IVRResources___LoadSharedResource : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRResources___LoadSharedResource() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRResources___LoadSharedResource", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRResources___LoadSharedResource(OVR__OpenVR__IVRResources___LoadSharedResource const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRResources___LoadSharedResource", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRResources___LoadSharedResource(OVR__OpenVR__IVRResources___LoadSharedResource&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRResources___LoadSharedResource(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRResources___LoadSharedResource& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRResources___LoadSharedResource& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRResources___LoadSharedResource& operator=(OVR__OpenVR__IVRResources___LoadSharedResource&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRResources___LoadSharedResource& operator=(OVR__OpenVR__IVRResources___LoadSharedResource const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRResources___LoadSharedResource(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265f678 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265f750 size 0x14 virtual true final false
 uint32_t Invoke(::StringW pchResourceName, ::StringW pchBuffer, uint32_t unBufferLen) ;

/// @brief Method BeginInvoke addr 0x265f764 size 0x98 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchResourceName, ::StringW pchBuffer, uint32_t unBufferLen, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265f7fc size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetResourceFullPath
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9299))
// CS Name: OVR.OpenVR.IVRResources::_GetResourceFullPath
class CORDL_TYPE OVR__OpenVR__IVRResources___GetResourceFullPath : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRResources___GetResourceFullPath() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRResources___GetResourceFullPath", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRResources___GetResourceFullPath(OVR__OpenVR__IVRResources___GetResourceFullPath const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRResources___GetResourceFullPath", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRResources___GetResourceFullPath(OVR__OpenVR__IVRResources___GetResourceFullPath&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRResources___GetResourceFullPath(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRResources___GetResourceFullPath& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRResources___GetResourceFullPath& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRResources___GetResourceFullPath& operator=(OVR__OpenVR__IVRResources___GetResourceFullPath&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRResources___GetResourceFullPath& operator=(OVR__OpenVR__IVRResources___GetResourceFullPath const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRResources___GetResourceFullPath(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265f824 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265f8fc size 0x14 virtual true final false
 uint32_t Invoke(::StringW pchResourceName, ::StringW pchResourceTypeDirectory, System::Text::StringBuilder pchPathBuffer, uint32_t unBufferLen) ;

/// @brief Method BeginInvoke addr 0x265f910 size 0xa8 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchResourceName, ::StringW pchResourceTypeDirectory, System::Text::StringBuilder pchPathBuffer, uint32_t unBufferLen, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265f9b8 size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRResources
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9300))
// CS Name: OVR.OpenVR.IVRResources
struct CORDL_TYPE IVRResources : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _GetResourceFullPath = OVR::OpenVR::OVR__OpenVR__IVRResources___GetResourceFullPath;

using _LoadSharedResource = OVR::OpenVR::OVR__OpenVR__IVRResources___LoadSharedResource;

// Ctor Parameters [CppParam { name: "LoadSharedResource", ty: "OVR::OpenVR::OVR__OpenVR__IVRResources___LoadSharedResource", modifiers: "", def_value: None }, CppParam { name: "GetResourceFullPath", ty: "OVR::OpenVR::OVR__OpenVR__IVRResources___GetResourceFullPath", modifiers: "", def_value: None }]
constexpr IVRResources(OVR::OpenVR::OVR__OpenVR__IVRResources___LoadSharedResource LoadSharedResource, OVR::OpenVR::OVR__OpenVR__IVRResources___GetResourceFullPath GetResourceFullPath) noexcept;


                    constexpr IVRResources(IVRResources const&) = default;
                    constexpr IVRResources(IVRResources&&) = default;
                    constexpr IVRResources& operator=(IVRResources const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IVRResources& operator=(IVRResources&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IVRResources(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRResources___LoadSharedResource __declspec(property(get=__get_LoadSharedResource, put=__set_LoadSharedResource))  LoadSharedResource;

constexpr void __set_LoadSharedResource(OVR::OpenVR::OVR__OpenVR__IVRResources___LoadSharedResource value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRResources___LoadSharedResource __get_LoadSharedResource() const;

 OVR::OpenVR::OVR__OpenVR__IVRResources___GetResourceFullPath __declspec(property(get=__get_GetResourceFullPath, put=__set_GetResourceFullPath))  GetResourceFullPath;

constexpr void __set_GetResourceFullPath(OVR::OpenVR::OVR__OpenVR__IVRResources___GetResourceFullPath value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRResources___GetResourceFullPath __get_GetResourceFullPath() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRResources___GetResourceFullPath);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRResources___GetResourceFullPath, "OVR.OpenVR", "IVRResources/_GetResourceFullPath");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRResources___LoadSharedResource);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRResources___LoadSharedResource, "OVR.OpenVR", "IVRResources/_LoadSharedResource");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRResources, "OVR.OpenVR", "IVRResources");

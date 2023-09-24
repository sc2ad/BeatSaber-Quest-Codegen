#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::Android {
struct AndroidAssetPackStatus;
}
namespace UnityEngine::Android {
struct AndroidAssetPackError;
}
// Forward declare root types
namespace UnityEngine::Android {
class AndroidAssetPackInfo;
}
// Type: UnityEngine.Android::AndroidAssetPackInfo
namespace UnityEngine::Android {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14890))
// CS Name: UnityEngine.Android.AndroidAssetPackInfo
class CORDL_TYPE AndroidAssetPackInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~AndroidAssetPackInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackInfo", modifiers: " const&", def_value: None }]
constexpr AndroidAssetPackInfo(AndroidAssetPackInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackInfo", modifiers: "&&", def_value: None }]
constexpr AndroidAssetPackInfo(AndroidAssetPackInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidAssetPackInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AndroidAssetPackInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidAssetPackInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidAssetPackInfo& operator=(AndroidAssetPackInfo&& o) noexcept = default;
  constexpr AndroidAssetPackInfo& operator=(AndroidAssetPackInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField))  _name_k__BackingField;

constexpr void __set__name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__name_k__BackingField() const;

 UnityEngine::Android::AndroidAssetPackStatus __declspec(property(get=__get__status_k__BackingField, put=__set__status_k__BackingField))  _status_k__BackingField;

constexpr void __set__status_k__BackingField(UnityEngine::Android::AndroidAssetPackStatus value) ;

constexpr UnityEngine::Android::AndroidAssetPackStatus __get__status_k__BackingField() const;

 uint64_t __declspec(property(get=__get__size_k__BackingField, put=__set__size_k__BackingField))  _size_k__BackingField;

constexpr void __set__size_k__BackingField(uint64_t value) ;

constexpr uint64_t __get__size_k__BackingField() const;

 uint64_t __declspec(property(get=__get__bytesDownloaded_k__BackingField, put=__set__bytesDownloaded_k__BackingField))  _bytesDownloaded_k__BackingField;

constexpr void __set__bytesDownloaded_k__BackingField(uint64_t value) ;

constexpr uint64_t __get__bytesDownloaded_k__BackingField() const;

 float_t __declspec(property(get=__get__transferProgress_k__BackingField, put=__set__transferProgress_k__BackingField))  _transferProgress_k__BackingField;

constexpr void __set__transferProgress_k__BackingField(float_t value) ;

constexpr float_t __get__transferProgress_k__BackingField() const;

 UnityEngine::Android::AndroidAssetPackError __declspec(property(get=__get__error_k__BackingField, put=__set__error_k__BackingField))  _error_k__BackingField;

constexpr void __set__error_k__BackingField(UnityEngine::Android::AndroidAssetPackError value) ;

constexpr UnityEngine::Android::AndroidAssetPackError __get__error_k__BackingField() const;


// Methods

static UnityEngine::Android::AndroidAssetPackInfo New_ctor(::StringW name, UnityEngine::Android::AndroidAssetPackStatus status, uint64_t size, uint64_t bytesDownloaded, float_t transferProgress, UnityEngine::Android::AndroidAssetPackError error) ;

/// @brief Method .ctor addr 0x2b16da4 size 0x64 virtual false final false
 void _ctor(::StringW name, UnityEngine::Android::AndroidAssetPackStatus status, uint64_t size, uint64_t bytesDownloaded, float_t transferProgress, UnityEngine::Android::AndroidAssetPackError error) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Android
NEED_NO_BOX(UnityEngine::Android::AndroidAssetPackInfo);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Android::AndroidAssetPackInfo, "UnityEngine.Android", "AndroidAssetPackInfo");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class ISaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class FileSaveData;
}
// Type: ::FileSaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13852))
// CS Name: FileSaveData
class CORDL_TYPE FileSaveData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::ISaveData
constexpr operator  GlobalNamespace::ISaveData() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FileSaveData() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSaveData", modifiers: " const&", def_value: None }]
constexpr FileSaveData(FileSaveData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSaveData", modifiers: "&&", def_value: None }]
constexpr FileSaveData(FileSaveData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileSaveData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FileSaveData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileSaveData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileSaveData& operator=(FileSaveData&& o) noexcept = default;
  constexpr FileSaveData& operator=(FileSaveData const& o) noexcept = default;
                


// Methods

/// @brief Method Save addr 0x1f7daec size 0x10 virtual true final true
 void Save(::StringW key, ::StringW value) ;

/// @brief Method Load addr 0x1f7dafc size 0x80 virtual true final true
 bool Load(::StringW key, ByRef<::StringW> value) ;

/// @brief Method Save addr 0x1f7db7c size 0x78 virtual true final true
 void Save(::StringW key, ::StringW value, ::StringW tempKey, ::StringW backupKey) ;

/// @brief Method Load addr 0x1f7dbf4 size 0x168 virtual true final true
 bool Load(::StringW key, ByRef<::StringW> value, ::StringW backupKey) ;

/// @brief Method Delete addr 0x1f7dd5c size 0xc virtual true final true
 void Delete(::StringW key) ;

/// @brief Method HasKey addr 0x1f7dd68 size 0xc virtual true final true
 bool HasKey(::StringW key) ;

static GlobalNamespace::FileSaveData New_ctor() ;

/// @brief Method .ctor addr 0x1f7dd74 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FileSaveData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileSaveData, "", "FileSaveData");

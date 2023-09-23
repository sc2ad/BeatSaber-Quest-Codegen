#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class ISaveData;
}
// Type: ::ISaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13853))
// CS Name: ISaveData
class CORDL_TYPE ISaveData : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISaveData() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISaveData(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Save addr 0x0 size 0xffffffffffffffff virtual true final false
 void Save(::StringW key, ::StringW value) ;

/// @brief Method Load addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Load(::StringW key, ByRef<::StringW> value) ;

/// @brief Method Save addr 0x0 size 0xffffffffffffffff virtual true final false
 void Save(::StringW key, ::StringW value, ::StringW tempKey, ::StringW backupKey) ;

/// @brief Method Load addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Load(::StringW key, ByRef<::StringW> value, ::StringW backupKey) ;

/// @brief Method Delete addr 0x0 size 0xffffffffffffffff virtual true final false
 void Delete(::StringW key) ;

/// @brief Method HasKey addr 0x0 size 0xffffffffffffffff virtual true final false
 bool HasKey(::StringW key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ISaveData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ISaveData, "", "ISaveData");

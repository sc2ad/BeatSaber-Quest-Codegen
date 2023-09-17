#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Zenject {
class TickableManager;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace Zenject {
class ITickable;
}
// Forward declare root types
namespace GlobalNamespace {
class SonySaveData;
}
// Type: ::SonySaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13854))
// CS Name: SonySaveData
class CORDL_TYPE SonySaveData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::ISaveData
constexpr operator  ::GlobalNamespace::ISaveData() const noexcept;

/// @brief Convert operator to ::Zenject::ITickable
constexpr operator  ::Zenject::ITickable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SonySaveData() = default;

// Ctor Parameters [CppParam { name: "", ty: "SonySaveData", modifiers: " const&", def_value: None }]
constexpr SonySaveData(SonySaveData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SonySaveData", modifiers: "&&", def_value: None }]
constexpr SonySaveData(SonySaveData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SonySaveData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SonySaveData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SonySaveData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SonySaveData& operator=(SonySaveData&& o) noexcept = default;
  constexpr SonySaveData& operator=(SonySaveData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__isMarkedForSave, put=__set__isMarkedForSave))  _isMarkedForSave;

constexpr void __set__isMarkedForSave(bool value) ;

constexpr bool __get__isMarkedForSave() const;


// Methods

/// @brief Method RegisterForTicking addr 0x1f7dd7c size 0x20 virtual false final false
 void RegisterForTicking(::Zenject::TickableManager tickableManager) ;

/// @brief Method Initialize addr 0x1f7dd9c size 0x4 virtual false final false
static void Initialize() ;

/// @brief Method Save addr 0x1f7dda0 size 0x28 virtual true final true
 void Save(::StringW key, ::StringW value) ;

/// @brief Method Load addr 0x1f7ddc8 size 0x80 virtual true final true
 bool Load(::StringW key, ByRef<::StringW> value) ;

/// @brief Method Save addr 0x1f7de48 size 0x28 virtual true final true
 void Save(::StringW key, ::StringW value, ::StringW tempKey, ::StringW backupKey) ;

/// @brief Method Load addr 0x1f7de70 size 0x4 virtual true final true
 bool Load(::StringW key, ByRef<::StringW> value, ::StringW backupKey) ;

/// @brief Method Delete addr 0x1f7de74 size 0x24 virtual true final true
 void Delete(::StringW key) ;

/// @brief Method HasKey addr 0x1f7de98 size 0xc virtual true final true
 bool HasKey(::StringW key) ;

/// @brief Method Tick addr 0x1f7dea4 size 0x18 virtual true final true
 void Tick() ;

// Ctor Parameters []
explicit SonySaveData() ;

/// @brief Method .ctor addr 0x1f7debc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SonySaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonySaveData, "", "SonySaveData");

#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class Material;
}
namespace UnityEngine::Rendering {
struct StencilOp;
}
namespace UnityEngine::UI {
class UnityEngine__UI__StencilMaterial__MatEntry;
}
namespace UnityEngine::Rendering {
struct ColorWriteMask;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine::Rendering {
struct CompareFunction;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UI {
class StencilMaterial;
}
namespace UnityEngine::UI {
class UnityEngine__UI__StencilMaterial__MatEntry;
}
// Type: ::MatEntry
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13065))
// CS Name: UnityEngine.UI.StencilMaterial::MatEntry
class CORDL_TYPE UnityEngine__UI__StencilMaterial__MatEntry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__UI__StencilMaterial__MatEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__StencilMaterial__MatEntry", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__StencilMaterial__MatEntry(UnityEngine__UI__StencilMaterial__MatEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__StencilMaterial__MatEntry", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__StencilMaterial__MatEntry(UnityEngine__UI__StencilMaterial__MatEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__StencilMaterial__MatEntry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UI__StencilMaterial__MatEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__StencilMaterial__MatEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__StencilMaterial__MatEntry& operator=(UnityEngine__UI__StencilMaterial__MatEntry&& o) noexcept = default;
  constexpr UnityEngine__UI__StencilMaterial__MatEntry& operator=(UnityEngine__UI__StencilMaterial__MatEntry const& o) noexcept = default;
                


// Fields

 UnityEngine::Material __declspec(property(get=__get_baseMat, put=__set_baseMat))  baseMat;

constexpr void __set_baseMat(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_baseMat() const;

 UnityEngine::Material __declspec(property(get=__get_customMat, put=__set_customMat))  customMat;

constexpr void __set_customMat(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_customMat() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_stencilId, put=__set_stencilId))  stencilId;

constexpr void __set_stencilId(int32_t value) ;

constexpr int32_t __get_stencilId() const;

 UnityEngine::Rendering::StencilOp __declspec(property(get=__get_operation, put=__set_operation))  operation;

constexpr void __set_operation(UnityEngine::Rendering::StencilOp value) ;

constexpr UnityEngine::Rendering::StencilOp __get_operation() const;

 UnityEngine::Rendering::CompareFunction __declspec(property(get=__get_compareFunction, put=__set_compareFunction))  compareFunction;

constexpr void __set_compareFunction(UnityEngine::Rendering::CompareFunction value) ;

constexpr UnityEngine::Rendering::CompareFunction __get_compareFunction() const;

 int32_t __declspec(property(get=__get_readMask, put=__set_readMask))  readMask;

constexpr void __set_readMask(int32_t value) ;

constexpr int32_t __get_readMask() const;

 int32_t __declspec(property(get=__get_writeMask, put=__set_writeMask))  writeMask;

constexpr void __set_writeMask(int32_t value) ;

constexpr int32_t __get_writeMask() const;

 bool __declspec(property(get=__get_useAlphaClip, put=__set_useAlphaClip))  useAlphaClip;

constexpr void __set_useAlphaClip(bool value) ;

constexpr bool __get_useAlphaClip() const;

 UnityEngine::Rendering::ColorWriteMask __declspec(property(get=__get_colorMask, put=__set_colorMask))  colorMask;

constexpr void __set_colorMask(UnityEngine::Rendering::ColorWriteMask value) ;

constexpr UnityEngine::Rendering::ColorWriteMask __get_colorMask() const;


// Methods

static UnityEngine::UI::UnityEngine__UI__StencilMaterial__MatEntry New_ctor() ;

/// @brief Method .ctor addr 0x2c11608 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::StencilMaterial
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13066))
// CS Name: UnityEngine.UI.StencilMaterial
class CORDL_TYPE StencilMaterial : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using MatEntry = UnityEngine::UI::UnityEngine__UI__StencilMaterial__MatEntry;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StencilMaterial() = default;

// Ctor Parameters [CppParam { name: "", ty: "StencilMaterial", modifiers: " const&", def_value: None }]
constexpr StencilMaterial(StencilMaterial const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StencilMaterial", modifiers: "&&", def_value: None }]
constexpr StencilMaterial(StencilMaterial&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StencilMaterial(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StencilMaterial& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StencilMaterial& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StencilMaterial& operator=(StencilMaterial&& o) noexcept = default;
  constexpr StencilMaterial& operator=(StencilMaterial const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<UnityEngine::UI::UnityEngine__UI__StencilMaterial__MatEntry> __declspec(property(get=__get_m_List, put=__set_m_List))  m_List;

static void __set_m_List(System::Collections::Generic::List_1<UnityEngine::UI::UnityEngine__UI__StencilMaterial__MatEntry> value) ;

static System::Collections::Generic::List_1<UnityEngine::UI::UnityEngine__UI__StencilMaterial__MatEntry> __get_m_List() ;


// Methods

/// @brief Method Add addr 0x2c10be4 size 0x8 virtual false final false
static UnityEngine::Material Add(UnityEngine::Material baseMat, int32_t stencilID) ;

/// @brief Method Add addr 0x2c10bec size 0x8c virtual false final false
static UnityEngine::Material Add(UnityEngine::Material baseMat, int32_t stencilID, UnityEngine::Rendering::StencilOp operation, UnityEngine::Rendering::CompareFunction compareFunction, UnityEngine::Rendering::ColorWriteMask colorWriteMask) ;

/// @brief Method LogWarningWhenNotInBatchmode addr 0x2c11590 size 0x78 virtual false final false
static void LogWarningWhenNotInBatchmode(::StringW warning, UnityEngine::Object context) ;

/// @brief Method Add addr 0x2c10c78 size 0x918 virtual false final false
static UnityEngine::Material Add(UnityEngine::Material baseMat, int32_t stencilID, UnityEngine::Rendering::StencilOp operation, UnityEngine::Rendering::CompareFunction compareFunction, UnityEngine::Rendering::ColorWriteMask colorWriteMask, int32_t readMask, int32_t writeMask) ;

/// @brief Method Remove addr 0x2c11618 size 0x1c0 virtual false final false
static void Remove(UnityEngine::Material customMat) ;

/// @brief Method ClearAll addr 0x2c117d8 size 0x11c virtual false final false
static void ClearAll() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::StencilMaterial);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::StencilMaterial, "UnityEngine.UI", "StencilMaterial");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__StencilMaterial__MatEntry);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__StencilMaterial__MatEntry, "UnityEngine.UI", "StencilMaterial/MatEntry");

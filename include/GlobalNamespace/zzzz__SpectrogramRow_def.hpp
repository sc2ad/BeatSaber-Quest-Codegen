#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace GlobalNamespace {
class BasicSpectrogramData;
}
// Forward declare root types
namespace GlobalNamespace {
class SpectrogramRow;
}
// Type: ::SpectrogramRow
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5100))
// CS Name: SpectrogramRow
class CORDL_TYPE SpectrogramRow : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SpectrogramRow() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpectrogramRow", modifiers: " const&", def_value: None }]
constexpr SpectrogramRow(SpectrogramRow const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpectrogramRow", modifiers: "&&", def_value: None }]
constexpr SpectrogramRow(SpectrogramRow&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpectrogramRow(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SpectrogramRow& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpectrogramRow& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpectrogramRow& operator=(SpectrogramRow&& o) noexcept = default;
  constexpr SpectrogramRow& operator=(SpectrogramRow const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::MeshRenderer> __declspec(property(get=__get__meshRenderers, put=__set__meshRenderers))  _meshRenderers;

constexpr void __set__meshRenderers(::ArrayW<UnityEngine::MeshRenderer> value) ;

constexpr ::ArrayW<UnityEngine::MeshRenderer> __get__meshRenderers() const;

 int32_t __declspec(property(get=__get__dataIndex, put=__set__dataIndex))  _dataIndex;

constexpr void __set__dataIndex(int32_t value) ;

constexpr int32_t __get__dataIndex() const;

 GlobalNamespace::BasicSpectrogramData __declspec(property(get=__get__spectrogramData, put=__set__spectrogramData))  _spectrogramData;

constexpr void __set__spectrogramData(GlobalNamespace::BasicSpectrogramData value) ;

constexpr GlobalNamespace::BasicSpectrogramData __get__spectrogramData() const;

static int32_t __declspec(property(get=__get__spectrogramDataID, put=__set__spectrogramDataID))  _spectrogramDataID;

static void __set__spectrogramDataID(int32_t value) ;

static int32_t __get__spectrogramDataID() ;

static UnityEngine::MaterialPropertyBlock __declspec(property(get=__get__materialPropertyBlock, put=__set__materialPropertyBlock))  _materialPropertyBlock;

static void __set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock value) ;

static UnityEngine::MaterialPropertyBlock __get__materialPropertyBlock() ;


// Methods

/// @brief Method Awake addr 0x226c088 size 0xa8 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x226c130 size 0x120 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit SpectrogramRow() ;

/// @brief Method .ctor addr 0x226c250 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SpectrogramRow);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpectrogramRow, "", "SpectrogramRow");

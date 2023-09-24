#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class SongTimeToShaderWriter;
}
// Type: ::SongTimeToShaderWriter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6052))
// CS Name: SongTimeToShaderWriter
class CORDL_TYPE SongTimeToShaderWriter : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SongTimeToShaderWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "SongTimeToShaderWriter", modifiers: " const&", def_value: None }]
constexpr SongTimeToShaderWriter(SongTimeToShaderWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SongTimeToShaderWriter", modifiers: "&&", def_value: None }]
constexpr SongTimeToShaderWriter(SongTimeToShaderWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SongTimeToShaderWriter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SongTimeToShaderWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SongTimeToShaderWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SongTimeToShaderWriter& operator=(SongTimeToShaderWriter&& o) noexcept = default;
  constexpr SongTimeToShaderWriter& operator=(SongTimeToShaderWriter const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

static int32_t __declspec(property(get=__get__songTimePropertyId, put=__set__songTimePropertyId))  _songTimePropertyId;

static void __set__songTimePropertyId(int32_t value) ;

static int32_t __get__songTimePropertyId() ;


// Methods

/// @brief Method Update addr 0x21b0cbc size 0x240 virtual false final false
 void Update() ;

static GlobalNamespace::SongTimeToShaderWriter New_ctor() ;

/// @brief Method .ctor addr 0x21b0efc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SongTimeToShaderWriter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongTimeToShaderWriter, "", "SongTimeToShaderWriter");

#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
// Forward declare root types
namespace UnityEngine::ProBuilder {
class UnwrapParameters;
}
// Type: UnityEngine.ProBuilder::UnwrapParameters
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12153))
// CS Name: UnityEngine.ProBuilder.UnwrapParameters
class CORDL_TYPE UnwrapParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnwrapParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnwrapParameters", modifiers: " const&", def_value: None }]
constexpr UnwrapParameters(UnwrapParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnwrapParameters", modifiers: "&&", def_value: None }]
constexpr UnwrapParameters(UnwrapParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnwrapParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnwrapParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnwrapParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnwrapParameters& operator=(UnwrapParameters&& o) noexcept = default;
  constexpr UnwrapParameters& operator=(UnwrapParameters const& o) noexcept = default;
                


// Fields

/// @brief Field k_HardAngle offset 0
static constexpr float_t  k_HardAngle{88};

/// @brief Field k_PackMargin offset 0
static constexpr float_t  k_PackMargin{20};

/// @brief Field k_AngleError offset 0
static constexpr float_t  k_AngleError{8};

/// @brief Field k_AreaError offset 0
static constexpr float_t  k_AreaError{15};

 float_t __declspec(property(get=__get_m_HardAngle, put=__set_m_HardAngle))  m_HardAngle;

constexpr void __set_m_HardAngle(float_t value) ;

constexpr float_t __get_m_HardAngle() const;

 float_t __declspec(property(get=__get_m_PackMargin, put=__set_m_PackMargin))  m_PackMargin;

constexpr void __set_m_PackMargin(float_t value) ;

constexpr float_t __get_m_PackMargin() const;

 float_t __declspec(property(get=__get_m_AngleError, put=__set_m_AngleError))  m_AngleError;

constexpr void __set_m_AngleError(float_t value) ;

constexpr float_t __get_m_AngleError() const;

 float_t __declspec(property(get=__get_m_AreaError, put=__set_m_AreaError))  m_AreaError;

constexpr void __set_m_AreaError(float_t value) ;

constexpr float_t __get_m_AreaError() const;


// Properties

 float_t __declspec(property(get=get_hardAngle, put=set_hardAngle))  hardAngle;

 float_t __declspec(property(get=get_packMargin, put=set_packMargin))  packMargin;

 float_t __declspec(property(get=get_angleError, put=set_angleError))  angleError;

 float_t __declspec(property(get=get_areaError, put=set_areaError))  areaError;


// Methods

/// @brief Method get_hardAngle addr 0x29e866c size 0x8 virtual false final false
 float_t get_hardAngle() ;

/// @brief Method set_hardAngle addr 0x29e8674 size 0x8 virtual false final false
 void set_hardAngle(float_t value) ;

/// @brief Method get_packMargin addr 0x29e867c size 0x8 virtual false final false
 float_t get_packMargin() ;

/// @brief Method set_packMargin addr 0x29e8684 size 0x8 virtual false final false
 void set_packMargin(float_t value) ;

/// @brief Method get_angleError addr 0x29e868c size 0x8 virtual false final false
 float_t get_angleError() ;

/// @brief Method set_angleError addr 0x29e8694 size 0x8 virtual false final false
 void set_angleError(float_t value) ;

/// @brief Method get_areaError addr 0x29e869c size 0x8 virtual false final false
 float_t get_areaError() ;

/// @brief Method set_areaError addr 0x29e86a4 size 0x8 virtual false final false
 void set_areaError(float_t value) ;

static UnityEngine::ProBuilder::UnwrapParameters New_ctor() ;

/// @brief Method .ctor addr 0x29e0db8 size 0x38 virtual false final false
 void _ctor() ;

static UnityEngine::ProBuilder::UnwrapParameters New_ctor(UnityEngine::ProBuilder::UnwrapParameters other) ;

/// @brief Method .ctor addr 0x29e86bc size 0x88 virtual false final false
 void _ctor(UnityEngine::ProBuilder::UnwrapParameters other) ;

/// @brief Method Reset addr 0x29e86ac size 0x10 virtual false final false
 void Reset() ;

/// @brief Method ToString addr 0x29e8744 size 0x1ac virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::UnwrapParameters);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnwrapParameters, "UnityEngine.ProBuilder", "UnwrapParameters");

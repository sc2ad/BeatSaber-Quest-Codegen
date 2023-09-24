#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Tayx::Graphy {
class G_GraphShader;
}
// Type: Tayx.Graphy::G_GraphShader
namespace Tayx::Graphy {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15191))
// CS Name: Tayx.Graphy.G_GraphShader
class CORDL_TYPE G_GraphShader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~G_GraphShader() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_GraphShader", modifiers: " const&", def_value: None }]
constexpr G_GraphShader(G_GraphShader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_GraphShader", modifiers: "&&", def_value: None }]
constexpr G_GraphShader(G_GraphShader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_GraphShader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr G_GraphShader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_GraphShader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_GraphShader& operator=(G_GraphShader&& o) noexcept = default;
  constexpr G_GraphShader& operator=(G_GraphShader const& o) noexcept = default;
                


// Fields

/// @brief Field ArrayMaxSizeFull offset 0
static constexpr int32_t  ArrayMaxSizeFull{512};

/// @brief Field ArrayMaxSizeLight offset 0
static constexpr int32_t  ArrayMaxSizeLight{128};

 int32_t __declspec(property(get=__get_ArrayMaxSize, put=__set_ArrayMaxSize))  ArrayMaxSize;

constexpr void __set_ArrayMaxSize(int32_t value) ;

constexpr int32_t __get_ArrayMaxSize() const;

 ::ArrayW<float_t> __declspec(property(get=__get_ShaderArrayValues, put=__set_ShaderArrayValues))  ShaderArrayValues;

constexpr void __set_ShaderArrayValues(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_ShaderArrayValues() const;

 UnityEngine::UI::Image __declspec(property(get=__get_Image, put=__set_Image))  Image;

constexpr void __set_Image(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get_Image() const;

 ::StringW __declspec(property(get=__get_Name, put=__set_Name))  Name;

constexpr void __set_Name(::StringW value) ;

constexpr ::StringW __get_Name() const;

 ::StringW __declspec(property(get=__get_Name_Length, put=__set_Name_Length))  Name_Length;

constexpr void __set_Name_Length(::StringW value) ;

constexpr ::StringW __get_Name_Length() const;

 float_t __declspec(property(get=__get_Average, put=__set_Average))  Average;

constexpr void __set_Average(float_t value) ;

constexpr float_t __get_Average() const;

 int32_t __declspec(property(get=__get_m_averagePropertyId, put=__set_m_averagePropertyId))  m_averagePropertyId;

constexpr void __set_m_averagePropertyId(int32_t value) ;

constexpr int32_t __get_m_averagePropertyId() const;

 float_t __declspec(property(get=__get_GoodThreshold, put=__set_GoodThreshold))  GoodThreshold;

constexpr void __set_GoodThreshold(float_t value) ;

constexpr float_t __get_GoodThreshold() const;

 float_t __declspec(property(get=__get_CautionThreshold, put=__set_CautionThreshold))  CautionThreshold;

constexpr void __set_CautionThreshold(float_t value) ;

constexpr float_t __get_CautionThreshold() const;

 int32_t __declspec(property(get=__get_m_goodThresholdPropertyId, put=__set_m_goodThresholdPropertyId))  m_goodThresholdPropertyId;

constexpr void __set_m_goodThresholdPropertyId(int32_t value) ;

constexpr int32_t __get_m_goodThresholdPropertyId() const;

 int32_t __declspec(property(get=__get_m_cautionThresholdPropertyId, put=__set_m_cautionThresholdPropertyId))  m_cautionThresholdPropertyId;

constexpr void __set_m_cautionThresholdPropertyId(int32_t value) ;

constexpr int32_t __get_m_cautionThresholdPropertyId() const;

 UnityEngine::Color __declspec(property(get=__get_GoodColor, put=__set_GoodColor))  GoodColor;

constexpr void __set_GoodColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_GoodColor() const;

 UnityEngine::Color __declspec(property(get=__get_CautionColor, put=__set_CautionColor))  CautionColor;

constexpr void __set_CautionColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_CautionColor() const;

 UnityEngine::Color __declspec(property(get=__get_CriticalColor, put=__set_CriticalColor))  CriticalColor;

constexpr void __set_CriticalColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_CriticalColor() const;

 int32_t __declspec(property(get=__get_m_goodColorPropertyId, put=__set_m_goodColorPropertyId))  m_goodColorPropertyId;

constexpr void __set_m_goodColorPropertyId(int32_t value) ;

constexpr int32_t __get_m_goodColorPropertyId() const;

 int32_t __declspec(property(get=__get_m_cautionColorPropertyId, put=__set_m_cautionColorPropertyId))  m_cautionColorPropertyId;

constexpr void __set_m_cautionColorPropertyId(int32_t value) ;

constexpr int32_t __get_m_cautionColorPropertyId() const;

 int32_t __declspec(property(get=__get_m_criticalColorPropertyId, put=__set_m_criticalColorPropertyId))  m_criticalColorPropertyId;

constexpr void __set_m_criticalColorPropertyId(int32_t value) ;

constexpr int32_t __get_m_criticalColorPropertyId() const;


// Methods

/// @brief Method InitializeShader addr 0x2872c00 size 0x17c virtual false final false
 void InitializeShader() ;

/// @brief Method UpdateArray addr 0x2872d7c size 0x44 virtual false final false
 void UpdateArray() ;

/// @brief Method UpdateAverage addr 0x2872dc0 size 0x3c virtual false final false
 void UpdateAverage() ;

/// @brief Method UpdateThresholds addr 0x2872dfc size 0x68 virtual false final false
 void UpdateThresholds() ;

/// @brief Method UpdateColors addr 0x2872e64 size 0xa0 virtual false final false
 void UpdateColors() ;

/// @brief Method UpdatePoints addr 0x2872f04 size 0x3c virtual false final false
 void UpdatePoints() ;

static Tayx::Graphy::G_GraphShader New_ctor() ;

/// @brief Method .ctor addr 0x2872f40 size 0x88 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
NEED_NO_BOX(Tayx::Graphy::G_GraphShader);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::G_GraphShader, "Tayx.Graphy", "G_GraphShader");

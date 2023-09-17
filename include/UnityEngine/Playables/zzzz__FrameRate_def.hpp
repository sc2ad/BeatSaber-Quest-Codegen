#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class IFormatProvider;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct FrameRate;
}
// Type: UnityEngine.Playables::FrameRate
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10356))
// CS Name: UnityEngine.Playables.FrameRate
struct CORDL_TYPE FrameRate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::Playables::FrameRate>
constexpr operator  ::System::IEquatable_1<::UnityEngine::Playables::FrameRate>() const;

// Ctor Parameters [CppParam { name: "m_Rate", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FrameRate(int32_t m_Rate) noexcept;


                    constexpr FrameRate(FrameRate const&) = default;
                    constexpr FrameRate(FrameRate&&) = default;
                    constexpr FrameRate& operator=(FrameRate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FrameRate& operator=(FrameRate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FrameRate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::UnityEngine::Playables::FrameRate __declspec(property(get=__get_k_24Fps, put=__set_k_24Fps))  k_24Fps;

static void __set_k_24Fps(::UnityEngine::Playables::FrameRate value) ;

static ::UnityEngine::Playables::FrameRate __get_k_24Fps() ;

static ::UnityEngine::Playables::FrameRate __declspec(property(get=__get_k_23_976Fps, put=__set_k_23_976Fps))  k_23_976Fps;

static void __set_k_23_976Fps(::UnityEngine::Playables::FrameRate value) ;

static ::UnityEngine::Playables::FrameRate __get_k_23_976Fps() ;

static ::UnityEngine::Playables::FrameRate __declspec(property(get=__get_k_25Fps, put=__set_k_25Fps))  k_25Fps;

static void __set_k_25Fps(::UnityEngine::Playables::FrameRate value) ;

static ::UnityEngine::Playables::FrameRate __get_k_25Fps() ;

static ::UnityEngine::Playables::FrameRate __declspec(property(get=__get_k_30Fps, put=__set_k_30Fps))  k_30Fps;

static void __set_k_30Fps(::UnityEngine::Playables::FrameRate value) ;

static ::UnityEngine::Playables::FrameRate __get_k_30Fps() ;

static ::UnityEngine::Playables::FrameRate __declspec(property(get=__get_k_29_97Fps, put=__set_k_29_97Fps))  k_29_97Fps;

static void __set_k_29_97Fps(::UnityEngine::Playables::FrameRate value) ;

static ::UnityEngine::Playables::FrameRate __get_k_29_97Fps() ;

static ::UnityEngine::Playables::FrameRate __declspec(property(get=__get_k_50Fps, put=__set_k_50Fps))  k_50Fps;

static void __set_k_50Fps(::UnityEngine::Playables::FrameRate value) ;

static ::UnityEngine::Playables::FrameRate __get_k_50Fps() ;

static ::UnityEngine::Playables::FrameRate __declspec(property(get=__get_k_60Fps, put=__set_k_60Fps))  k_60Fps;

static void __set_k_60Fps(::UnityEngine::Playables::FrameRate value) ;

static ::UnityEngine::Playables::FrameRate __get_k_60Fps() ;

static ::UnityEngine::Playables::FrameRate __declspec(property(get=__get_k_59_94Fps, put=__set_k_59_94Fps))  k_59_94Fps;

static void __set_k_59_94Fps(::UnityEngine::Playables::FrameRate value) ;

static ::UnityEngine::Playables::FrameRate __get_k_59_94Fps() ;

 int32_t __declspec(property(get=__get_m_Rate, put=__set_m_Rate))  m_Rate;

constexpr void __set_m_Rate(int32_t value) ;

constexpr int32_t __get_m_Rate() const;


// Properties

 bool __declspec(property(get=get_dropFrame))  dropFrame;

 double_t __declspec(property(get=get_rate))  rate;


// Methods

/// @brief Method get_dropFrame addr 0x2b7c2e4 size 0xc virtual false final false
 bool get_dropFrame() ;

/// @brief Method get_rate addr 0x2b7c2f0 size 0x28 virtual false final false
 double_t get_rate() ;

/// @brief Method .ctor addr 0x2b7c318 size 0x18 virtual false final false
 void _ctor(uint32_t frameRate, bool drop) ;

/// @brief Method IsValid addr 0x2b7c330 size 0x10 virtual false final false
 bool IsValid() ;

/// @brief Method Equals addr 0x2b7c340 size 0x10 virtual true final true
 bool Equals(::UnityEngine::Playables::FrameRate other) ;

/// @brief Method Equals addr 0x2b7c350 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method op_Equality addr 0x2b7c3c8 size 0xc virtual false final false
static bool op_Equality(::UnityEngine::Playables::FrameRate a, ::UnityEngine::Playables::FrameRate b) ;

/// @brief Method GetHashCode addr 0x2b7c3d4 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2b7c3dc size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b7c3e8 size 0x194 virtual false final false
 ::StringW ToString(::StringW format, ::System::IFormatProvider formatProvider) ;

/// @brief Method DoubleToFrameRate addr 0x2b7c57c size 0xc4 virtual false final false
static ::UnityEngine::Playables::FrameRate DoubleToFrameRate(double_t framerate) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::FrameRate, "UnityEngine.Playables", "FrameRate");

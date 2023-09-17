#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::Experimental::Video {
struct VideoClipPlayable;
}
// Type: UnityEngine.Experimental.Video::VideoClipPlayable
namespace UnityEngine::Experimental::Video {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15921))
// CS Name: UnityEngine.Experimental.Video.VideoClipPlayable
struct CORDL_TYPE VideoClipPlayable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::Playables::IPlayable
constexpr operator  ::UnityEngine::Playables::IPlayable() const;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::Experimental::Video::VideoClipPlayable>
constexpr operator  ::System::IEquatable_1<::UnityEngine::Experimental::Video::VideoClipPlayable>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr VideoClipPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;


                    constexpr VideoClipPlayable(VideoClipPlayable const&) = default;
                    constexpr VideoClipPlayable(VideoClipPlayable&&) = default;
                    constexpr VideoClipPlayable& operator=(VideoClipPlayable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VideoClipPlayable& operator=(VideoClipPlayable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VideoClipPlayable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Playables::PlayableHandle __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(::UnityEngine::Playables::PlayableHandle value) ;

constexpr ::UnityEngine::Playables::PlayableHandle __get_m_Handle() const;


// Methods

/// @brief Method GetHandle addr 0x2d38728 size 0xc virtual true final true
 ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method Equals addr 0x2d38734 size 0x78 virtual true final true
 bool Equals(::UnityEngine::Experimental::Video::VideoClipPlayable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::Video
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Video::VideoClipPlayable, "UnityEngine.Experimental.Video", "VideoClipPlayable");
